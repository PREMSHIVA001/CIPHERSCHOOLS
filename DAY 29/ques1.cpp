#include<iostream>
using namespace std;

class Instrument{
  public:
  virtual void playSound(){
      cout << "Instruments play Sound\n";
  }
  virtual void display(){
      cout << "Instruments\n";
  }
  virtual ~Instrument() {}
};

class Piano : public Instrument{
  public:
  void playSound() override{
      cout << "Playing a melodious piano tune\n";
  }
  void display() override{
      cout << "This is a Piano\n";
  }
};

class Violin : public Instrument{
    public:
    void playSound() override{
        cout << "Playing a classical violin tune\n";
    }
    void display() override{
        cout << "This is a Violin\n";
    }
};

int main() {
    
    Instrument* instruments[2];

    // Dynamically allocate objects of Piano and Violin
    instruments[0] = new Piano();
    instruments[1] = new Violin();

    // Use polymorphism to call the appropriate methods
    for (int i = 0; i < 2; ++i) {
        instruments[i]->display();
        instruments[i]->playSound();
        cout << endl;
    }

    // Clean up (deallocate dynamically allocated objects)
    for (int i = 0; i < 2; ++i) {
        delete instruments[i];
    }

    return 0;
}