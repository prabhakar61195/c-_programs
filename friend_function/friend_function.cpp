#include<iostream>
using namespace std;
class complex
{
    private: 
    int a, b;
    public:;
    void set_data(int x,int y)
    {
        a = x; b = y;
    }
    void show_data()
    {
        cout<<" a= "<<a<<" b= "<<b<<"\n";
    }
    friend void fun(complex);
};
void fun(complex c)
{
    cout<<" sum is "<<c.a+c.b<<"\n";
}
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c1.show_data();
    fun(c1);
}