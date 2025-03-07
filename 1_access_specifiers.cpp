#include <iostream>
using namespace std;

// Base class with public, protected, and private variables
class Parent
{
public:
  int publicVar = 1;

protected:
  int protectedVar = 2;

private:
  int privateVar = 3; // Not accessible in derived classes
};

// Public Inheritance
class ChildPublic : public Parent
{
public:
  void show() {
    cout << "Public Inheritance:" << endl;
    cout << "Public Variable: " << publicVar << endl;     // Accessible
    cout << "Protected Variable: " << protectedVar << endl; // Accessible
    // cout << "Private Variable: " << privateVar << endl; // Error: Not accessible
  }
};

// Protected Inheritance
class ChildProtected : protected Parent
{
public:
  void show() {
    cout << "\nProtected Inheritance:" << endl;
    cout << "Public Variable (now protected): " << publicVar << endl; // Accessible as protected
    cout << "Protected Variable: " << protectedVar << endl; // Accessible as protected
    // cout << "Private Variable: " << privateVar << endl; // Error: Not accessible
  }
};

// Private Inheritance
class ChildPrivate : private Parent
{
public:
  void show() {
    cout << "\nPrivate Inheritance:" << endl;
    cout << "Public Variable (now private): " << publicVar << endl; // Accessible as private
    cout << "Protected Variable (now private): " << protectedVar << endl; // Accessible as private
    // cout << "Private Variable: " << privateVar << endl; // Error: Not accessible
  }
};

// Main function
int main() {
  ChildPublic obj1;
  obj1.show();
  cout << "Accessing publicVar from main: " << obj1.publicVar << endl; // Allowed (publicVar remains public)

  ChildProtected obj2;
  obj2.show();
  // cout << obj2.publicVar << endl; // Error: publicVar is now protected

  ChildPrivate obj3;
  obj3.show();
  // cout << obj3.publicVar << endl; // Error: publicVar is now private

  return 0;
}
