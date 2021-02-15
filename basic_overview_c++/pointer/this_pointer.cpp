#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void set_dimension(int l, int b,int h)
    {
        this->l=l; this->b=b; this->h =h;
    }
    void show_dimension()
    {
        cout<<"\n l= "<<l<<" b= "<<b<<" h= "<<h<<"\n";
    }
};
int main()
{
    box *b1,smallbox;
    b1 = &smallbox;
    b1->set_dimension(10,10,10);
    b1->show_dimension();

}