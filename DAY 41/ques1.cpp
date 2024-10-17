#include<iostream>
using namespace std;

int fact(int n);
int main(){
    int n;
    cout << "Enter an Integer value: \n";
    cin >> n;
    
    if(n==0){
        cout << "The Factorial of the entered number is: 0 \n";
    }
    else if(n<0){
        cout << "Enter a Valid Number!";
    }
    else{
        long int x = fact(n);
        cout << "The Factorial of the entered number is: " << x << endl;
    }
    
    return 0;
}

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}