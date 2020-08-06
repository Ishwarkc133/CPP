#include<iostream>
using namespace std;
class B;

class A
{
    int a;
    public:
    void setData(int x)
    {
        a=x;
    }
    void showData()
    {
        cout<<"a:"<<a<<endl;
    }
    friend void add(A,B);
};

class B 
{
    int b;
    public:
    void setData(int y)
    {
         b=y;
    }
    void showData()
    {
        cout<<"b:"<<b<<endl;
    }
    friend void add(A,B);
    
};

void add(A o1,B o2)
{
    cout<<"sum:"<<o1.a+o2.b<<endl;
}
int main()
{
    A a;
    B b;
    a.setData(2);
    a.showData();
    b.setData(3);
    b.showData();
    add(a,b);
}