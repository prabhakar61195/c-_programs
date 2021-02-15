#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
    int choice ,a,b,s;
    cout<<"\n";
    cout<<"1. Addition \n";
    cout<<"2 .Odd-Even \n";
    cout<<"3 .Printing N natural number \n";
    cout<<"4 . exit \n";


    cout<<"\n enter your choice \n";
    cin>>choice;
    switch(choice)
    {
        case 1: 
        cout<<"enter two number \n";
        cin>>a>>b;
        s= a+b;
        cout<<"Sum is "<<s<<"\n";
        break;

        case 2:
        cout<<"enter the number \n";
        cin>>a;
        if(a%2==0)
            cout<<"even \n";
        else
            cout<<"odd \n";
        break;

        case 3:
        cout<<"list the number to print natural number \n ";
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            cout<<i<<" ";
        }
        break;

        case 4:
        exit(0);

        default:
        cout<<"invalid choice";

    
    }
    }

}