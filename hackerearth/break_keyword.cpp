#include<iostream>
using namespace std;
int main()
{
    int i=1,x;
    while(i<=5)
    {
        cout<<"enter the number \n";
        cin>>x;
        if(x>0)
        break;
        i++;

    }
    i==6?cout<<"end normally":cout<<"break applied";
}