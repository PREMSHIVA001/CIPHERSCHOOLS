
#include <iostream>
#include <string>
using namespace std;

int main() {
   string str;
   int length;
   cout << "Enter the String: ";
   getline(cin, str);
   length = str.length();
   cout << "The length of the string is: " << length;

    return 0;
}