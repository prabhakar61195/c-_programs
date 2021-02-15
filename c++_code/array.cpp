#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0;
    cout<<"enter the number \n";
    for(int i=0;i<=9;i++)
        cin>>a[i];
    for(int i=0;i<=9;i++)
        sum = sum + a[i];
        cout<<"sum is "<<sum<<endl;
        float avg = sum/10.0;
        cout<<"avg "<<avg<<endl;
    }