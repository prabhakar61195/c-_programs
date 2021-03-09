#include<stdio.h>
int main()
{
    int pow=1,n,y;
    printf("enter the number and its power ");
    scanf("%d %d",&y,&n );
    for(int i=1;i<=n;i++)
    {
        pow = pow*y;
    }
     printf("power of %d is %d\n",y,pow);
}