#include<iostream>
using namespace std;
class complex
{

    int a,b;
    public:
    void set_data(int x,int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout<<"a = "<<a<<" b = "<<b<<"\n";
    }
    complex add(complex c)
    {
        complex temp;
        temp.a= a + c.a;
        temp.b= b + c.b;
        return(temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(4,6);
    c3=c1.add(c2);
    c1.show_data();
    c2.show_data();
    c3.show_data();
}