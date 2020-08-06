#include<iostream>
using namespace std;
class Integer
{
    int a;
    public:
    void setData(int x)
    {
          a=x;
    }

    Integer operator ++()
    {
        Integer temp;
        temp.a=++a;//pre increment
        return temp;
    }
     Integer operator ++(int)
 {
     Integer temp;
     temp.a=a++;//post increment
     return temp;
 }
    void showData()
    {
        cout<<"a:"<<a<<endl;
    }
};
int main()
{
    Integer i1,i2;
    i1.setData(3);
    i1.showData();
    i2=++i1;
    //i2=i1++;
    i1.showData();
    i2.showData();

}