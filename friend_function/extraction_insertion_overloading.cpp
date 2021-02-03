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
 
};

int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(4,4);
    c1.show_data();
} 