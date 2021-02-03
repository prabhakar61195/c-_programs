#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int x, int y)
    {
        a=x; b=y;
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    complex(int z)
    {
        a=z;
        cout<<"a="<<a<<endl;
    }
    complex()
    {
        
    }
    complex (complex &c) // to avoid recursion &c is used.
    {
        a=c.a;
        b=c.b;
        cout<<"a="<<a<<" b="<<b<<endl;
    }

};
int main()
{
    complex c1(3,4),c2(2),c3;
    complex c4(c1);
}