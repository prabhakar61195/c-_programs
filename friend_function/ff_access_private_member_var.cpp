#include<iostream>
using namespace std;
class B; // forwaord declaration
class A
{
    int a;
    public:
    void set_data(int x)
    {
        a = x;
    }
    friend void fun(A,B);
};
class B
{
    int b;
    public:
    void set_data(int y)
    {
        b = y;
    }
    friend void fun(A,B);

};
void fun(A o1, B o2)
{
    cout<< "sum is "<<o1.a+o2.b<<"\n";
}
int main()
{
    A obj1;
    B obj2;
    obj1.set_data(3);
    obj2.set_data(7);
    fun(obj1,obj2);

}