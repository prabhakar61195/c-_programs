//constructor overloading

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y)   //paramatize constructor
    {
        a = x; b = y;
        cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
    }
    complex(int z)        //paramatize constructor
    {
        a=z;
        cout<<"a="<<a<<endl;
    }
    complex()        //default constructor
    {}
};
int main()
{
    complex c1(3,4),c2(3),c3;
}