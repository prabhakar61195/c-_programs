#include<stdio.h>
int main()
{
     int x;
    printf("enter the number of range ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        printf("%d \n",2*i+1);
    }
}