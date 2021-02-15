//encapsulation achecived

#include<iostream>
using namespace std;
struct book
{
    private:
    int bookid;
    char title[10];
    float price;
    public:
    void input()
    {
        cout<<" enter book details ";
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<bookid<<" "<<title<<" "<<price<<"\n";
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
    
}