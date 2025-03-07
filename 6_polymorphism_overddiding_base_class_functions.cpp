
// Compile-time vs. Run-time Polymorphism

// Polymorphism in C++ allows functions or objects to take multiple forms. 
// Compile-time polymorphism (static binding) is determined during compilation and achieved through function and operator overloading,
// making it faster. Run-time polymorphism (dynamic binding) occurs at execution using method overriding with virtual functions,
// enabling flexibility but with a slight performance cost. Both types enhance object-oriented programming by improving efficiency and scalability.


// 1️⃣ Compile-time Polymorphism (Static Binding)

// Example: Function Overloading
// A Math class has multiple add() methods, one for integers and another for doubles. The compiler determines which add() method to call based on the argument types.
// Example: add(5, 3); calls int add(int, int), while add(5.5, 3.2); calls double add(double, double).
// 2️⃣ Run-time Polymorphism (Dynamic Binding)

// Example: Method Overriding with Virtual Functions
// A Shape base class has a draw() function. The Circle and Rectangle classes override draw(). When a Shape* pointer points to a Circle object and calls draw(), the overridden Circle version executes at run-time due to dynamic binding
// #include <iostream>
// #include <string>


// class Character 
// {
// public:
//   Character( std::string n , int h ) {
//     name = n;
//     health = h;
//   }

//   virtual ~Character() {}

//   std::string name;
//   int health;

//   void displayStats() {
//     std::cout << "Name: " << name << " Health: " << health << std::endl;
//   }

//   void attack() {
//     std::cout << "Character Attacks base damage" << std::endl;
//   }

//   void attack(int multiplier) {
//     std::cout << "Character Attacks with damage x " << multiplier   << std::endl; 
//   }
// };

// class Warrior : public Character
// {
// public:
//   Warrior( std::string n , int h ) : Character( n , h )
//   {
//   }

//   ~Warrior()
//   {
//   }



// };

// // Derived Mage class
// class Mage : public Character
// {
// public:
//   Mage( std::string n , int h ) : Character( n , h )
//   {
//   }

//   ~Mage()
//   {
//   }

// };


// int main() {
//   Character* w = new Warrior( "John" , 100 );
//   Character* m = new Mage( "Jim" , 100 );

//   std::cout << "\n--- Warrior Attacks ---" << std::endl;
//   w->attack( 5 ); Compile-time Polymorphism)

//   std::cout << "\n--- Mage Attacks ---" << std::endl;
//   m->attack();

//   delete w;
//   delete m;

//   return 0;
// }




#include <iostream>
#include <string>


class Character 
{
public:
  Character( std::string n , int h ) {
    name = n;
    health = h;
  }

  virtual ~Character() {}

  std::string name;
  int health;

  void displayStats() {
    std::cout << "Name: " << name << " Health: " << health << std::endl;
  }

 virtual void attack() {
    std::cout << "Character Attacks base damage" << std::endl;
  }

 //virtual void attack(int multiplier) {
 //   std::cout << "Character Attacks with damage x " << multiplier   << std::endl;
 // }
};

class Warrior : public Character
{
public:
  Warrior( std::string n , int h ) : Character( n , h )
  {
  }

  ~Warrior(){}

  int multiplier = 5; 
  
  void attack() override
  {
    std::cout << "Warrior Attacks with damage x " << multiplier   << std::endl;
  }

};

// Derived Mage class
class Mage : public Character
{
public:
  Mage( std::string n , int h ) : Character( n , h )
  {
  }

  ~Mage()
  {
  }

};


int main() {
  Character* w = new Warrior( "John" , 100 );
  Character* m = new Mage( "Jim" , 100 );

  std::cout << "\n--- Warrior Attacks ---" << std::endl;
  w->attack(); // Run-time polymorphism (dynamic dispatch)

  std::cout << "\n--- Mage Attacks ---" << std::endl;
  m->attack();

  delete w;
  delete m;

  return 0;
}
