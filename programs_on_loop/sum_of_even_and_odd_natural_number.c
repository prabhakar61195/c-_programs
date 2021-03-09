#include<stdio.h>
int main()
{
    int i,x;
    printf("enter the number ");
    scanf("%d",&x);
    printf("even natural numbers are\n");
    for(i=1;i<=x;i++)
    {
        printf("%d \n",2*i);
    }
    printf("odd natural numbers are\n");
    for(i=0;i<=x;i++)
    {
        printf("%d \n",2*i+1);
    }
}   