#include<stdio.h>
int main()
    {
        int a,b,t;
        printf("enter the number a and b \n");
        scanf("%d %d",&a,&b);
        t=a;
        a=b;
        b=t;
        printf("%d %d",a,b);

    }
