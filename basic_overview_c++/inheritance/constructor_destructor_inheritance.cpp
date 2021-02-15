#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int k)
    {
        a=k;
    }

    void displ()
    {
        cout<<"a="<<a;
    }

};
class B :public A
{
    int b;
    public:
    B(int x, int y):A(x)
    {
        b=y;
    }
    void display()
    {
        displ();
        cout<<" b="<<b;
    }
    
};
int main()
{
    B obj1(2,3);
    obj1.display();
}
