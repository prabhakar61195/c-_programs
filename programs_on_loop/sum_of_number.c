#include<stdio.h>
int main()
{
    int i,x,sum=0,rem,y,rev=0;
    printf("enter the number ");
    scanf("%d",&x);
    y=x;
      while(x>0)
    {
        rem = x%10;
        rev = (rev*10) + rem;
        x= x/10;
    }
    printf("%d \n",rev);

     while(y>0)
    {
        rem = y%10;
        sum = sum + rem;
        y= y/10;
    }
    printf("%d\n",sum);
    
}