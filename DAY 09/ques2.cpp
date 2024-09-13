#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array" << endl;
    
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    int *ptr = array;
    cout << "Printing the array using Pointer" << endl;
    
    for(int i=0; i<n; i++){
        cout << *(ptr+i) << " " ; 
    }
}