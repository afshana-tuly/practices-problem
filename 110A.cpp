#include <iostream>

using namespace std;

int main()
{string n;
    int count=0;
    cin>>n;
    for(int i=0;i<n.length();i++){
      if(n[i]=='4'||n[i]=='7'){
        count=count+1;
      }
    }
    if(count==4||count==7){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    

    return 0;
}