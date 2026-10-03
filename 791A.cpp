#include <iostream>

using namespace std;

int main()
{ int b,d,k=0;
  cin>>b>>d;
  while(b<=d){
    k++;
    b=3*b;
    d=2*d;
   if(b>d){
    cout<<k;
  } 
}
    return 0;
}