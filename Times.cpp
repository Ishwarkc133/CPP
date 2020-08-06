#include<iostream>
using namespace std;

class Time
{
    int HR,MIN,SEC;
    public:
    
    void setTime(int x,int y,int z)
    {
      HR=x;
      MIN=y;
      SEC=z;
    }
    void showTime()
    {
        cout<<endl<<HR<<":"<<MIN<<":"<<SEC<<endl;
    }
    void normalise()
    {
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN%60;
    }
    Time operator +(Time t)
    {
        Time temp;
        temp.SEC=SEC+t.SEC;
        temp.MIN=MIN+t.MIN;
        temp.HR=HR+t.HR;
        t.normalise();
        return temp;
    }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(0,0,0);
    t1.showTime();
    t2.setTime(0,0,0);
    t2.showTime();
    t3=t1+t2;
    t3.normalise();
    t3.showTime();

}