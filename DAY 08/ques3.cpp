#include <iostream>
#include <string>
using namespace std;

int main() {
   string str1,str2;
   
   cout << "Enter the first String: ";
   getline(cin, str1);
   cout << "Enter the Second String: ";
   getline(cin, str2);
   
   cout << "After concatenation of the entered string: " << str1 << " " << str2;

    return 0;
}