/* #include<iostream>
using namespace std;

int main()
{
    int i,j,n,count=0;
    cout<<"enter the number ";
    cin>>n;
        for(i=2;i<n;i++)
        {
           if(n%i==0)
           count++;
        }
        if(count==0)
        cout<<"prime ";
        else
        cout<<"not prime";
        
} */

/* #include<iostream>
using namespace std;
int main()
{
    int i,j,n,count=0;
    cout<<"enter the number ";
    cin>>n;
    // for(i=2;i<n;i++)
    for(i=2;i<n/2;i++) //half loop
    {
        if(n%i==0)
        count++;
    }
    
    if(count==0 && n>1)
    cout<<" prime ";
    else
    cout<<"  not prime";
} */

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=2;i<=1000;i++)
    {
        int count=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        count++;
        }
        if(count==0)
        cout<<i<<" ";
    }
}