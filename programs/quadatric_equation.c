#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float X,Y;
    printf("enter the cofeccient of x^2 , x and constant term ");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b - (4*a*c);
    printf("value of D is %d\n",D);
    if(D<0)
    printf("imaginary number ");
    if(D==0)
    {
    printf("Both Roots are equal ");
    X= -b/(2.0*a);
    printf("Root is %f",X);
    }
    if(D>0)
    {
    printf("Roots are real and distinct ");
    X =(-b+sqrt(D))/(2*a); 
    Y =(-b-sqrt(D))/(2*a);
    printf("square root are %f %f ",X,Y);
    }
}