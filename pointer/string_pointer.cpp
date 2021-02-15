#include<iostream>
using namespace std;
int len(char*);
int main()
{
 char a[]="computer";
 int k=len(a);
    printf("%d",k);
}
int len(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}
char* rev(char *p)
{
    int i,l;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i) = *(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return(p);

}
