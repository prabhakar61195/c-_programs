//Armstrong number is a number that is equal to the sum of cubes of its digits. 
//For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
//153= 1*1*1 + 5*5*5 + 3*3*3 =1+125+27=153
#include<stdio.h>
int main()
{
    int x,arm=0,y,rem;
    printf("enter the number ");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        rem= x%10;
        arm = arm + (rem*rem*rem);
        x= x/10;
    }
    printf(" armmstrong number of %d is %d",y,arm);
}