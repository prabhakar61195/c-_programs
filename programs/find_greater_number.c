/* #include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d",a);
    else
    printf("%d",b);
} */


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d",a);
    else if(b>c && b>a)
    printf("%d",b);
    else
    printf("%d",c);
}