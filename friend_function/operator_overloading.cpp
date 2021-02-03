/* 
#include<iostream>
using namespace std;
class complex
{ 
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a = x; b = y;
    }
    void show_data()
    {
        cout<<"\n a = "<<a<<" b = "<<b<<"\n";
    }
    complex  operator + (complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return(temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(4,4);
    c3 = c1 + c2;  // c3 = c1.operator+(c2);
    c3.show_data();
}
 */


#include<iostream>
using namespace std;
class complex
{ 
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a = x; b = y;
    }
    void show_data()
    {
        cout<<"\n a = "<<a<<" b = "<<b<<"\n";
    }
   friend complex  operator + (complex,complex);
  
};
complex  operator + (complex c1, complex c2)
    {
        complex temp;
        temp.a = c1.a + c2.a;
        temp.b = c1.b + c2.b;
        return(temp);
    }
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(4,4);
    c3 = c1 + c2;  // c3 = c1.operator+(c2);
    c3.show_data();

}