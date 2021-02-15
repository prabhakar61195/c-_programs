#include<stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    if(x & 1)
    printf("odd");
    else
    printf("even");
}