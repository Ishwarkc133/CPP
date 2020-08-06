#include<iostream>
using namespace std;
class SI
{ 
    private:
    float p,t,r,i;
    public:
    SI(int x,int y,int z)
    {
        p=x;
        t=y;
        r=z;
    }

    int calc()
    {
       float i=(p*t*r)/100;
        cout<<"."<<i;
        return 0;
    
    }


};
int main()
{
    float x,y,z;

    cout<<"enter xyz";
    cin>>x>>y>>z;
    SI a(x,y,z);
    a.calc();
}