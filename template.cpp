#include <iostream>
using namespace std;

template <class T>
T  big (T a, T b) 
{
  T temp;
  temp = (a>b)? a : b;
  return (temp);
}

int main () 
{
    cout<<big(5.2,2.5)<<endl;
    cout<<big(2,5);
}
