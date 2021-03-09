/* #include<stdio.h>
int main()
{
    int year;
    printf("enter the year ");
    scanf("%d",&year);
    if(year%4)
    printf("Not leap year");
    else if(year%100)
    printf("leap year");
    else if(year%400)
    printf("not leap year");
    else
    printf("leap year");
} */

#include<stdio.h>
int main()
{
    int year;
    printf("enter the year ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        printf("leap year ");
        else
        printf("not leap year");
    }
    else
    {
        if(year%4==0)
        printf("leap year");
        else
        printf("not leap year");
    }
}