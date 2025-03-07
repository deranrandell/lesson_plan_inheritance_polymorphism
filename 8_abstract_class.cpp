// Abstract classes in C++ are used to:

// Define a common interface (using pure virtual functions) for derived classes, ensuring they implement specific methods.
// Facilitate polymorphism, allowing objects of different derived classes to be treated uniformly through pointers or references to the abstract base class.
// Enforce method implementation in derived classes, ensuring consistency across objects.
// Enable code reuse by providing default method implementations that derived classes can override.
// Support extensibility, allowing new functionality to be added without altering existing code.
#include <iostream>
#include <string>


class ICharacter
{
public :
  virtual void attack() = 0 ;
  virtual void displayStats() = 0;

  virtual ~ICharacter() {}  // Virtual destructor (important for interfaces)
};

class Warrior : public ICharacter
{
public:
  std::string name;
  int health;

  Warrior( std::string n , int h ) 
  {
    name = n;
    health = h;
  }

  void attack() override 
  {
    std::cout << "Warrior attack function called" << std::endl;
  }
  void displayStats() override
  {
    std::cout << "Warrior displayStats function called" << std::endl;
  }

  ~Warrior(){}  

};


int main() {
  ICharacter* w = new Warrior( "John" , 100 );  

  std::cout << "\n--- Warrior Attacks ---" << std::endl;
  w->attack();
  w->displayStats();
  

  delete w;  

  return 0;
}
