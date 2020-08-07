#include<iostream>
using namespace std;
int main()
{
    int *p=new int(5);
    float *q=new float(5.5);
    int *r=new int[5];
    for(int i=0;i<5;i++)
        r[i]=i+1;
        cout<<"value of store in block"<<endl;
        for(int i=0;i<5;i++)
            cout<<r[i];
        
    
    cout<<*p<<endl;
    cout<<*q;
    delete p;
    delete q;
    return 0;

}