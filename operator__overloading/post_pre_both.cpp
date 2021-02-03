#include<iostream>
using namespace std;
class integer
{
    int a;
    public:
    void set_data(int x)
    {
        a = x;
    }
    void show_data()
    {
        cout<<"\n a = "<<a<<"\n";
    }
    integer operator ++()
    {
        integer temp;
        temp.a=++a;
        return(temp);
    }
    integer operator ++ (int)
    {
        integer temp;
        temp.a=a++;
        return(temp);
    }

};
int main()
{
    cout<<"pre increment example";
    integer i1,i2;
    i1.set_data(3);
    i1.show_data();
    // i2= i1.operator ++();
    i2=++i1; // pre increment
    i2.show_data();
    i1.show_data();

    cout<<"post increment example";
    // i1.set_data(4);
     i1.show_data();
    i2=i1++; // post increment
    i2.show_data();
    i1.show_data();

}