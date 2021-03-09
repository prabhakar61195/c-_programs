#include<stdio.h>
int main()
{
    printf("method 1 \n");
    for(int i = 1;i<=10;i++)
    printf("%d \n",i);
    int x=1;
    printf("method 2 \n");
    while(x<=10)
    {
    printf("%d \n",x);
    x++;
    }
    int y=1;
    printf("method 3 \n");
    do
    {
        printf("%d \n",y);
        y++;
    }while(y<=10);
}
