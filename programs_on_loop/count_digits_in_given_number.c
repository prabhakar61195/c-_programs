#include<stdio.h>
int main()
{
long x,i,count=0;
    printf("printf enter the number ");
    scanf("%ld",&x);
    while(x>0)
    {
    x=x/10;
    count++;
    }
    printf("%ld \n",count);

}