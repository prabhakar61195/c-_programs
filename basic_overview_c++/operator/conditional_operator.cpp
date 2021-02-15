#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number ";
    cin>>x;
    x>8?cout<<"true":cout<<"false";
    cout<<"\n";
    int z,k;
    cin>>z>>k;
    int max;
    // max= z>k?z:k;
    // cout<<max;
    cout<<(z>k?z:k);
    int o=5;
    cout<<~o; // bitwise not

}