#include<stdio.h>
int len(char*);
char* rev(char*);
int main()
{
    // printf("%d",len("computer"));
    printf("\n %s",rev("computer"));
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
