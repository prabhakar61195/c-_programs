#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,i;
    cout<<n1<<" "<<n2<<" ";
    for(i=0;i<=5;i++)
    {
    n3=n2+n1;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;
    }

}