#include<iostream>
using namespace std;

class complex
{
int a,b;
public:
void setData(int x,int y)
{
 x=a;
 y=b;
}

friend ostream& operator<<(ostream &,complex);
friend istream& operator>>(istream &,complex &);
};                                                                                      
 ostream& operator<<(ostream &dout,complex c)
 {
    cout<<"a = "<<c.a<<endl<<"b ="<<c.b<<endl; 
    return (dout);
}

 istream& operator>>(istream &din,complex &c)
{
    cin>>c.a>>c.b;
    return(din);
}

int main()
{
    complex c1;
    cout<<"enter complex number : ";
    cin>>c1;
    cout<<c1;

}