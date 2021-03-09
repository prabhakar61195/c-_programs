#include<stdio.h>
int main()
{
    int i,x;
    printf("enter the table number ");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
        printf("%d \n",x*i);
    }
}