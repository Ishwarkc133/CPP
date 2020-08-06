#include<iostream>
using namespace std;


class A
{ 
    public:
    int a,b;
    void setData(int x)
    {
        a=x;
        
    }
    void showData()
    {
        cout<<a;
    }
    
};

class B :public A
{
public:
void setValue(int y)
{
    setData(y);
}
void showValue()
{
    showData();
}

};

int main()
{
    B obj;
    obj.setValue(5);
    obj.showValue();
}