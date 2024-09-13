#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str,str2,str3;
    getline(cin, str);
    
    for(char c : str){
        if(isalnum(c)){
            str2 += tolower(c);
        }
    }
    int n = str2.length();
    for(int i=n-1; i>=0; i--){
        str3 += str2[i];
    }
    if(str2 == str3){
        cout << "Entered string is a Palindrome" << endl;
    }
    else cout << "Entered string is not a Palindrome" << endl;
    
    
    return 0;
}