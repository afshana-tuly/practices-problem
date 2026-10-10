#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, count1=0,count2=0;
   cin>>n;
   string x;
   cin>>x;
   for(int i=0;i<n;i++){
   
    if(x[i]=='A'){count1=count1+1;}
else if(x[i]=='D'){count2=count2+1;}
   } 
   if(count1>count2){cout<<"Anton"<<endl;}
   else if(count1<count2){cout<<"Danik"<<endl;}
   else{cout<<"Friendship"<<endl;}
    return 0;
}