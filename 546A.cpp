#include <iostream>

using namespace std;

int main()
{ 
  int k,n,w;
  int sum=0;
  cin>>k>>n>>w;
  for(int i=1;i<=w;i++)
{ int d;
   d=k*i;
sum=sum+d;

}  
if(sum>n){
n=sum-n;
cout<<n<<endl; }
else 
{cout<<0<<endl;} 
    return 0;
}