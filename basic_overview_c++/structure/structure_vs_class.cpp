// #include<iostream>
// using namespace std;
// struct complex
// {
//     private:
//         int a,b;
//     public:
//         void set_data(int x,int y)
//         {
//             a=x;
//             b=y;
//         }
//         void show_data()
//         {
//             cout<<"\na ="<<a<<" b= "<<b;
//         }
// };
// int main()
// {
//     complex c1;
//     c1.set_data(3,4);
//     c1.show_data();
// }


// #include<iostream>
// using namespace std;
// class complex
// {
//     private:
//         int a,b;// by default it is private in class not neccesary to use private keyword
//     public:
//         void set_data(int x,int y)
//         {
//             a=x;
//             b=y;
//         }
//         void show_data()
//         {
//             cout<<"\na ="<<a<<" b= "<<b;
//         }
// };
// int main()
// {
//     complex c1;
//     c1.set_data(3,4);
//     c1.show_data();
// }




#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;// by default it is private in class not neccesary to use private keyword
    public:
       void set_data(int,int);
        void show_data()
        {
            cout<<"\na ="<<a<<" b= "<<b;
        }
};
 void complex:: set_data(int x,int y)
        {
            a=x;
            b=y;
        }
int main()
{
    complex c1;
    c1.set_data(3,4);
    c1.show_data();
}


