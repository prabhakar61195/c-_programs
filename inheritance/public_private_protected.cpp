#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    protected:
    void set_data(int x)
    {
        a=x;
    }
      void show_data()
    {
        cout<<" a= "<<a<<"\n";
    }
};
class B : public A
{
    public:
    void set_value(int x)
    {
        set_data(x);
    }
    void display()
    {
        show_data();
    }
  
};
int main()
{
    B obj1;
    obj1.set_value(6);
    obj1.display();
}