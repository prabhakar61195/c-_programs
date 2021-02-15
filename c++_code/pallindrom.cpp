#include<iostream>
using namespace std;
int main()
{
    int rem,n,temp,sum=0;
     cout<<"entter the number ";
     cin>>n;
    temp=n;
    while(n>0)
    {
    rem = n%10;
    sum = sum*10 +rem;
    n=n/10;
    }
    cout<<sum<<"\n";
    if(sum==temp)
    cout<<"pallindrom \n";
    else
    cout<<"not pallindrom \n";

}
