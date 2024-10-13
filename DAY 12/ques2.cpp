#include <iostream>
using namespace std;

int main() {
    int n,m,key,flag = 0;
    cout << "Enter the rows and coloum for the 2D-array: ";
    cin >> n >> m;
    int array[n][m];
    
    cout << "Enter the elements in the Array: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> array[i][j];
        }
    }
    cout<< "Enter the key element: ";
    cin >> key;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array[i][j] == key){
                flag = 1;
            }
        }
    }
    if(flag  == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}