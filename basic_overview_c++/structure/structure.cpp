#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    book b1={100,"saket programmer", 55.5};
    book b2,b3;
    cout<<b1.bookid<<" "<<b1.price<<" "<<b1.title;
}

