#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void f1()
    {
        cout<<"F1"<<endl;
    }


};

class B1:virtual public A 
{
public:
 int b1;
 void f2()
    {
        cout<<"F2"<<endl;
    }

};
class B2: virtual public A
{

  public:
  int b2;
  void f3()
    {
        cout<<"F3"<<endl;
    }
};

class C: public B1,public B2
{
    public:
    int c;
    void f4()
    {
        cout<<"F4"<<endl;
    }
};

int main()
{
    C obj;
    cout<<"size of obj :"<<sizeof(obj)<<endl;
    cout<<"size:"<<sizeof(B1)<<endl;
    obj.f1();
    obj.f2();
    obj.f3();
    obj.f4();
}