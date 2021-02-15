/* If(1<=n<=9) , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if(n>9)  and it is an even number, then print "even".
Else if(n>9)  and it is an odd number, then print "odd" 

input 
8
11
output

eight
nine
even
odd


*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int n,n1,n2;
    cin>>n1>>n2;
    for(n=n1;n<=n2;n++)
    {
    if(n==1)
    cout<<"one"<<endl;
    else if(n==2)
    cout<<"two"<<endl;
    else if(n==3)
    cout<<"three"<<endl;
    else if(n==4)
    cout<<"four"<<endl;
    else if(n==5)
    cout<<"five"<<endl;
    else if(n==6)
    cout<<"six"<<endl;
    else if(n==7)
    cout<<"seven"<<endl;
    else if(n==8)
    cout<<"eight"<<endl;
    else if(n==9)
    cout<<"nine"<<endl;
    else if(n%2==0)
    cout<<"even"<<endl;
    else
    cout<<"odd"<<endl;
    }
    return 0;
}
