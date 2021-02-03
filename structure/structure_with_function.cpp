#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
book input();
void display(book);

int main()
{
    book b1;
    b1= input();
    display(b1);
}
void display(book b)
{
    cout<<b.bookid<<" "<<b.title<<" " <<b.price;
}
book input()
{
    book b;
    cout <<"enter the book details "<<"\n";
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}