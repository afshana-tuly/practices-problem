#include <iostream>
#include<string>
using namespace std;

int main()
{ string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'
      ||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y'){
      s[i]=' ';
    }
    else{
    
      if(s[i]>='A'&&s[i]<='Z'){
        s[i]=s[i]+32;  }
        else{
          s[i]=s[i];
        }
    }
  if(s[i] != ' '){
        cout << "." << s[i];
  }
}  
    return 0;
}