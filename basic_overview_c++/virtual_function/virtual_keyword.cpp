#include<iostream>
using namespace std;
class A
{
    public:
    void f1(){ cout<<" f1 of class A will call \n";}
   virtual void f2(){ cout<<" f2 of class A will call \n";}
   virtual void f3(){ cout<<" f3 of class A will call \n";}
   virtual void f4(){ cout<<" f4 of class A will call \n";}

};
class B:public A
{
    public:
    void f1(){ cout<<" f1 of class B will print \n";}
    void f2(){ cout<<" f2 of class B will call \n";}
    void f3(){ cout<<" f3 of class B will call \n";}
    void f4(int k){ cout<<"f4 of class B will call \n";}

};
int main()
{
    A *p1,b1;
    B b2;
    p1=&b2;
 
    p1->f1();
    p1->f2();
    p1->f3();
    p1->f4();

}