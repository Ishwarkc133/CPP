#include<iostream>
using namespace std;


class A
{ 
    int a,b;
    protected:
    void setData(int x)
    {
        a=x;
        
    }
};

class B :public A
{
public:
void setValue(int y)
{
    setData(y);
}

};

int main()
{
    int y;
    B obj;
    obj.setValue(y);
}