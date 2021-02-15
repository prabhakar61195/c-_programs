// #include<iostream>
// using namespace std;

// template <class x>
// x big(x a, x b)
// {
//     if(a>b)
//         return(a);
//     else
//         return(b);
// }
// int main()
// {
//     cout<<big(3,4)<<" ";
//     cout<<big(3.6,6.5);
// }


#include<iostream>
using namespace std;

template <class x , class y>
x big(x a, y b)
{
    if(a>b)
        return(a);
    else
        return(b);
}
int main()
{
    cout<<big(3,4)<<" ";
    cout<<big(3.6,6.5);
}