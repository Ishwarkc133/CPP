#include<iostream>
using namespace std;
class complex
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
    friend complex operator +(complex,complex);
};
complex operator +(complex X,complex Y)
{
   complex temp;
   temp.a=X.a+Y.a;
   temp.b=X.b+Y.b;
   return temp;
}

int main()
{
    complex c1,c2,c3;
    c1.setData(2,3);
    c1.showData();
    c2.setData(3,2);
    c2.showData();
    c3=c1+c2;//c3=operator+(c1,c2)
    c3.showData();
}