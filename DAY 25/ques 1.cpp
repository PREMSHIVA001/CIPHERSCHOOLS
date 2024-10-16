#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;
    
    int array[n];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    
    bool found = false;
    for(int i=0; i<n; i++){
        int num = array[i], flag = 0;
        for(int j=0; j<n; j++){
            if(num == array[j]){
                flag++;
            }
        }
        if(flag == 1){
            cout << "The element not repeating twice is: " << array[i] << endl;
                found = true;
        }
    }
    if(!found){
        cout << "No Repeating element";
    }
    
}