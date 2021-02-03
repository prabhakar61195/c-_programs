#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main()
{
    int r, l,b,h;
    cout<<"enter the radius of circle ";
    cin>>r;
    float A= area(r);
    cout<<"Area of circle is "<<A<<endl;
    cout<<"enter the radius of triandle ";
    cin>>l>>b;
    int a = area(l,b);
    cout<<"Area of Triangle is "<<a<<endl;
}
float area(int R)
{
    return(3.14*R*R);
}
int area(int L,int B)
{
    return(L*B);
}