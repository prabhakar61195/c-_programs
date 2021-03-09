#include<stdio.h>
int main()
{
    int i,n,sum=0, mul=1;
    printf("enter the natural number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d \n",i);
        sum = sum+i;
        mul= mul*i;
    }
    printf("sum of natural number is %d and multiple of natual number is  %d ",sum,mul);
}