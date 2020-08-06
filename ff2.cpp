#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    friend void add(Complex);
};
     void add(Complex c) 
{
    cout<<"sum :"<<c.a+c.b<<endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c1.showData();
    add(c1);
    c2.setData(4,3);
    c2.showData();
    add(c2);
    return 0;
}