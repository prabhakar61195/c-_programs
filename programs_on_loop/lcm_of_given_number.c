/* #include<stdio.h>
int main()
{
    int L,x,y;
    printf("enter the two numbers ");
    scanf("%d %d",&x,&y);
    for(L=1;L<x*y;L++)
    {
        if(L%x==0 && L%y==0)
    break;
    }
    printf("lcm of % d and % d is %d ",x,y,L);
} */


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

/* #include<stdio.h>
int main()
{
   
    int min,M,N;
    scanf("%d %d",&M,&N);
    min= M<N?M:N;
    int gcd;
    for(int i =min;i>=1;i--)
    {
        if(M%i==0 && N%i==0)
        {
            gcd=i;
            break;
        }
    }
    int k = (M*N)/gcd;
    printf("%d\n",k);
} */