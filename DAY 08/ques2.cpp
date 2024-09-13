#include <iostream>
#include <string>
using namespace std;

int main() {
   string str;
   int count=0;
   char ch;
   
   cout << "Enter the String: ";
   getline(cin, str);
   cout << "Enter the Character: ";
   cin >> ch;
   int length = str.length();
   
   for(int i=0; i<length; i++){
       if(str[i]==ch){
           count++;
       }
   }
   cout << "The Number of Occurrences of " << ch << " is :" << count;

    return 0;
}