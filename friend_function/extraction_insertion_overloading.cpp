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
    friend istream& operator >>(istream&, complex&);
    friend ostream& operator <<(ostream&, complex);
   
};
ostream& operator<<(ostream &dout, complex c)
{
    dout<<"\n a= "<<c.a<<" b= "<<c.b<<"\n"; //cout<<"\n a= "<<c.a<<" b= "<<c.b<<"\n"; //cout and dout is same here
    return(dout);
}
istream& operator>>(istream &din, complex &c)
{
    din>>c.a>>c.b; //cin>>c.a>>c.b; // cin and din is same here
    return(din);
}

int main()
{
    complex c1,c2,c3;
    cout<<"enter a complex number ";
    // operator>>(cin,c1);
     cin>>c1;
    cout<<"your entered number ";
    // operator<<(cout,c1);
    cout<<c1;

} 