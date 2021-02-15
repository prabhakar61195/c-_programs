#include <stdio.h>
int main()
{
    int x=0;
    x=getIntegerOnly();
    printf("You have entered %d",x);
}
int getIntegerOnly()
{
    int num=0;
    int ch;
    while(1)
    {    ch=getchar();
        if(ch>=48 && ch<=57)

        {

           printf("%c",ch);
            num=num*10+(ch-48);
          }
           if(ch==13)
            break;
    }
    return num;
}
 