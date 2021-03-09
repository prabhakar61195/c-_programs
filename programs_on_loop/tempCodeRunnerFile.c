#include<stdio.h>
int main()
{
    long L,x,y;
    printf("enter the two numbers ");
    scanf("%ld %ld",&x,&y);
    for(L=(x>y?x:y);L<x*y;L=L+(x>y?x:y))
    {
        if(L%x==0 && L%y==0)
    break;
    }
    printf("lcm of % ld and % ld is %ld ",x,y,L);
}
