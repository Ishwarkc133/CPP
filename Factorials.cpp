#include<iostream>
using namespace std;
class fact
{
        int n, i, f;
        public:
        fact(int x)  
        {
                n=x;

        }
        fact(fact &x)
        {
                n=x.n;
        
        }
        auto calculate()
        {
                f=1;
                for(i=1; i<=n; i++)
                {
                        f=f*i;
                }
                return f;
        }

};
int main()
{
        int x;
        cout<<"\n Enter Value : ";
        cin>>x;
        fact f1(x);
        fact f2(f1);
        f2.calculate();
        cout<<f2.calculate();


}