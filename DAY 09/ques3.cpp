#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of an Integer: ";
    cin >> n;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    
    cout << "The value entered: " << n << endl;
    cout << "The value inside pointer1 with its address: " << *ptr1 << "  " << ptr1 << endl;
    cout << "The value inside pointer2 with its address: " << **ptr2 << "  " << ptr2 << endl;
}