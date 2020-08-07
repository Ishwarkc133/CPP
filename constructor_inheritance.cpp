#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int k)
    {
        a=k;
        cout<<"a="<<a<<endl;
     }
     ~A()
     {
         cout<<"A Destructor"<<endl;
     }

};

class B:public A
{
    int b;
    public:
B(int x,int y):A(x)
{ 
    b=y;
    cout<<"b="<<b<<endl;
}
~B()
{
    cout<<"B Destructor"<<endl;
}
};

int main()
{
    B obj(2,3);

}
