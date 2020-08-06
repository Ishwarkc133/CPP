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

  complex operator +(complex c)
  {
     complex temp;
     temp.a=a+c.a;
     temp.b=b+c.b;
     return (temp);
  }

  void showData()
  {
     cout<<"a:"<<a<<"b"<<b;
  }




};
int main()
 
{
    int a,b;
    complex c1,c2,c3;
    c1.setData(1,1);
    c2.setData(2,2);
    c3=c1+c2;//c3=c1.operator+(c2); 
    c3.showData();
}