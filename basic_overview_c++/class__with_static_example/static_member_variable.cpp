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

};
float Account:: roi=3.5f;
int main()
{
    Account a1;
    a1.set_balance(3);
    a1.display();
    
}