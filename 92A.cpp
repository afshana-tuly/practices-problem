#include <iostream>

using namespace std;

int main()
{ long long n,k;
  cin>>n>>k;
  int i=1;
  while(k>=i){
    k-=i;
    i++;
  if(i>n)
  {
    i=1;
  }
  }
    cout<<k;
    return 0;
}