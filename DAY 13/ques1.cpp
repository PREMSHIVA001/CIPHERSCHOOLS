#include <iostream>
using namespace std;

int main() {
    int* dynamicInt = new int;
    *dynamicInt = 42;

    int* dynamicArray = new int[5];
    for(int i = 0; i < 5; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    cout << "Dynamic Integer: " << *dynamicInt << endl;
    cout << "Dynamic Array: ";
    
    for(int i = 0; i < 5; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete dynamicInt;
    delete[] dynamicArray;

    return 0;
}
