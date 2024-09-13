#include <iostream>
using namespace std;

int main(){
    int n,target,count=0;
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
            count++;
            break;
        }
    }
    if(count == 1) cout << "YESS!";
    else cout << "NO!";
    
    return 0;
}