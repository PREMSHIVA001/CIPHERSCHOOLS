#include <iostream>
#include <string>
using namespace std;

class Car{
  public:
  string brand;
  long int model, engine, seats;
  
  void input(){
      cout << "Enter the Brand Name: " ;
      cin.ignore();
      getline(cin , brand);
      cout << "Enter the Model: ";
      cin >> model;
      cout << "Enter the Engine Number: ";
      cin >> engine;
      cout << "Enter the Number of Seats: ";
      cin >> seats;
  }
  void displayInfo(){
      cout << "Brand Name: " << brand << endl;
      cout << "Model: " << model << endl;
      cout << "Engine: " << engine << endl;
      cout << "Number of Seats: " << seats << endl;
  }
};

int main() {
    Car obj;
    obj.input();
    cout << "CAR DETAILS" << endl;
    obj.displayInfo();
    
    return 0;
}