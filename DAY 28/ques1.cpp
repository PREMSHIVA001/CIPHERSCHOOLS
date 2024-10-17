#include<iostream>
#include<string>
using namespace std;

class Vehicle{
  public:
  string name;
  int year;
  float fuel;
  
  Vehicle(){
      cout << "Enter the Name of Manufacturer: ";
      cin.ignore();
      getline(cin,name);
      cout << "\nEnter the Manufactured Year: ";
      cin >> year;
      cout << "\nEnter the Fuel left in the vehicle: ";
      cin >> fuel;
  }
  void refuel(float amount){
      fuel += amount;
  }
  virtual void display(){
      cout << "The Name of Manufacturer is: " << name << endl;
      cout << "The Manufactured Year is: " << year << endl;
      cout << "The Total Fuel in the Vehicle is: " << fuel << endl;
  }
};

class Car : public Vehicle{
  public:
  int doors;
  Car(){
      cout << "Enter the no.of doors of the Car: ";
      cin >> doors;
  }
  void display() override{
      cout << "\nCar Details:\n";
      cout << "The Name of the Manufacturer is: " << name << endl;
      cout << "The Manufactured Year is: " << year << endl;
      cout << "The Total Fuel in the vehicle is: " << fuel << endl;
      openDoors();
  }
  void openDoors(){
      cout << "Doors are opened\n";
  }
};

class Bike : public Vehicle{
  public:
  bool hasCarrier;
  Bike(){
    cout << "\nDoes the Bike have a carrier? (1 for Yes, 0 for No): ";
    cin >> hasCarrier;
  }
  void display() override{
      cout << "\nBike Details:\n";
      cout << "Name of Manufacturer: " << name << endl;
      cout << "Manufactured Year: " << year << endl;
      cout << "Total Fuel in the Bike: " << fuel << endl;
      if(hasCarrier){
          cout << "The Bike has a Carrier\n";
      }
      else{
          cout << "The Bike has No Carrier\n";
      }
      kickStart();
  }
  void kickStart(){
    cout << "Bike Kick-started\n";
  }
};

int main(){
    float fuel1,fuel2;
    
    cout << "Enter the Details of the Car\n";
    Car obj1;
    cout << "Enter the amount of ReFuel: ";
    cin >> fuel1;
    obj1.refuel(fuel1);
    
    cout << "Enter the Details of the Bike\n";
    Bike obj2;
    cout << "Enter the amount of ReFuel: ";
    cin >> fuel2;
    obj2.refuel(fuel2);
    
    obj1.display();
    obj2.display();
    
    return 0;
}