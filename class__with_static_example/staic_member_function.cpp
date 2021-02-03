#include<iostream>
using namespace std;
class Account
{
    private:
    int balance;
    static float roi;
    public:
    void set_balance(int b)
    {
        balance=b;
    }
    void display()
    {
        cout<<balance<<"\n";
        cout<<roi<<"\n";
    }
   static void setRoi(float r)
    {
        roi=r;
    }

};
float Account:: roi=3.5f;
int main()
{
    Account a1;
    a1.set_balance(3);
    // a1.setRoi(33.5);// not neccesary to use object because static variable donot depent on object
   Account::setRoi(55.6);
    a1.display();
    
}