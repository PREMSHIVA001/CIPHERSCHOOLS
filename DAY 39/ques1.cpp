#include<iostream>
#include<iomanip>
using namespace std;

int power(long double, int);
int main(){
    int n;
    double x;
    cout << "Enter the amount of energy (in kilowatt-hours) generated by the solar panels in one day.\n";
    cin >> x;
    cout << "Enter the number of days the solar panels will operate.\n";
    cin >> n;
    
    long double total_energy = power(x,n);
    cout << "The total energy generated over" << n << " days is: " <<fixed<<setprecision(2)<< total_energy;
    
    return 0;
}

int power(long double x, int n){
    if(n>0){
        return x * power(x,n-1);
    }
    else{
        return 1;
    }
}