#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer value: ";
    cin >> n;
    int *ptr = &n;
    cout << "Address value stored in pointer is: " << ptr << endl;
    cout << "Value of the variable: " << n << endl;
    cout << "Value of the variable accessed through pointer is: " << *ptr << endl;

    return 0;
}