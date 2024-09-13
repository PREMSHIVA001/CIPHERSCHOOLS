#include <iostream>
using namespace std;

int main(){
    int n,target,index = -1;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements in the array" << endl;
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    cout << "Enter the Target element: ";
    cin >> target;
    for(int i=0; i<n; i++){
        if(target == array[i]){
            index = i+1;
            break;
        }
    }
    cout << index;
    
    return 0;
}