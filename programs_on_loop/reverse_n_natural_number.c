#include<stdio.h>
int main()
{
    int x;
    printf("enter the range of natural number ");
    scanf("%d",&x);
    for (int i = x; i >= 1; i--)
    {
        printf("%d \n",i);
    }
    
}