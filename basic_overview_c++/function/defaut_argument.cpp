#include<iostream>
using namespace std;
int sum(int,int,int=0);
int main()
{
    int a,b;
    cout<<"enter the number "<<endl;
    cin>>a>>b;
    cout<<"sum is "<<sum(a,b)<<endl;
    int c;
    cout<<"enter another number "<<endl;
    cin>>a>>b>>c;
    cout<<"sum is "<<sum(a,b,c)<<endl;
}
int sum(int x,int y,int z)
{
    return(x+y+z);
}
