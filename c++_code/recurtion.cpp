#include<iostream>
using namespace std;
int fun(int);
int main()
{
    int k,i;
    cout<<"enter the number ";
    cin>>i;
    k=fun(i);
    cout<<"sum of natural number is "<<k<<" ";
}
int fun(int a)
{
    int s;
    if(a==1)
    return a;
    else
    s=a+fun(a-1);
    return s;

}