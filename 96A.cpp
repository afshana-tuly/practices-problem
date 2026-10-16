#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    int count = 1;
    int n = s.length();
    int found = 0;
 
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]){
            count++;
            if(count >= 7){
                found = 1;
                break; 
            }
        } else {
            count = 1; 
        }
    }
 
    if(found){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}