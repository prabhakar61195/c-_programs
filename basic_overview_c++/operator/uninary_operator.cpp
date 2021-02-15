#include<iostream>
using namespace std;
 int main()
 {
     cout<<" +  - ++ ++ sizeof()  are uniary operator \n";

     int x =4;
     cout<<"x="<<x<<endl;
     x++; // x= x+1 post increment
     cout<<"pre increment x="<<x<<endl;
     ++x; //x= x+1 pre inrcement
     cout<<"post increment x="<<x<<endl;
    int y =10;
     cout<<"y="<<y<<endl;
     y--; // y= y-1 post decrement
     cout<<"pre decrement y="<<y<<endl;
     --y; //y= y-1 pre dercement
     cout<<"post decrement y="<<y<<endl;


    int z=6,k;
    // k=z++; post incrent
    k=++z;//pre increment
    cout<<"k="<<k<<" z="<<z<<endl;


    cout<<"size of x is = "<<sizeof x<<endl;
    cout<<"size of int "<< sizeof(int)<<endl;
    cout<<"size of double "<<sizeof(double)<<endl;
    cout<<"size of float "<<sizeof(float)<<endl;
    cout<<"size of char "<<sizeof(char)<<endl;
    cout<<"size of constant "<<sizeof(7.5)<<endl;
    cout<<"size of constant "<<sizeof(3)<<endl;
    cout<<"size of constant "<<sizeof("k")<<endl; //ansii code use 16 bit so int take 2 byte
    int l=sizeof("A");
    cout<<"size of constant"<<l<<endl;

 }