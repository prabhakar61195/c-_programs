#include<iostream>
using namespace std;
class car
{
    public:
    void shiftgare()
    {
        cout<<"honda car gare";
    }
};
class supercar : public car
{
        public:
        void shiftgare()
        {
            cout<<"\n honda modified gare\n";
        }
};
int main()
{
    supercar s1;
    s1.shiftgare();
}