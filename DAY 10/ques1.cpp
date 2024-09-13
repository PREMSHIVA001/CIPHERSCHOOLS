#include <iostream>
using namespace std;

int findMax(int array[], int n){
    int greatest = array[0];
    for(int i=0; i<n; i++){
        if(array[i+1]>array[i]) greatest = array[i+1];
    }
    return greatest;
}

int main(){
    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;
    int array[n];
    cout << "Enter the values of Array: ";
    
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    int gr = findMax(array,n);
    cout << "The highest value in the entered Array is: " << gr ;
    
}