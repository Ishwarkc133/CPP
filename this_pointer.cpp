#include<iostream>
using namespace std;
class A
{
    private:
    int l,b,h;
    public:
    void setDimesion(int l,int b,int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    void showDimension()
    {
        cout<<"L:"<<l<<"B:"<<b<<"C:"<<h;
    }
};
int main()
{
    A *p,obj;
    p=&obj;
    p->setDimesion(1,0,3);
    p->showDimension();
}