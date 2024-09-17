#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int breadth;
  
  public:
    // Default constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    
    // Copy constructor
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
    }
    
    
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    
    Rectangle rect1(10, 5);
    cout << "Rectangle 1: ";
    rect1.display();

    Rectangle rect2 = rect1;
    cout << "Rectangle 2 (Copy of Rectangle 1): ";
    rect2.display();
    
    return 0;
}
