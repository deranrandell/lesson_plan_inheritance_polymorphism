#include <iostream>
#include <string>

class Sword
{
public:
  void SwordAttack() {
    std::cout << "Attacks with Sword" << std::endl;
  }
};

class Shield
{
public:
  void ShieldDefend() {
    std::cout << "Defends with Shield" << std::endl;
  }
};

class Character : public Sword , public Shield
{
public:
  Character( std::string n , int h ) {
    std::cout << "Character Constructor Called" << std::endl;
    name = n;
    health = h;
  }

   virtual ~Character() { // Use virtual destructor for proper cleanup in inheritance
    std::cout << "Character Destructor Called" << std::endl;
  }

  std::string name;
  int health;

  void displayStats() {
    std::cout << "Name: " << name << " Health: " << health << std::endl;
  }

   void attack() { 
    std::cout << "Character Attacks" << std::endl;
  }
};

// Derived Knight class
class Knight : public Character
{
public:
  Knight( std::string n , int h ) : Character( n , h )   
  {
    std::cout << " Knight Constructor Called" << std::endl;

  }

  ~Knight() 
  {
    std::cout << " Knight Destructor Called" << std::endl;
  }

};

// Derived Mage class
class Mage : public Character
{
public:
  Mage( std::string n , int h ) : Character( n , h ) 
  {
    std::cout << " Mage Constructor Called" << std::endl;

  }

  ~Mage() 
  {
    std::cout << " Mage Destructor Called" << std::endl;
  }

};

// Function to perform all attacks
void performAllAttacks( Character* character ) {
  character->displayStats();
  character->attack(); 
  character->SwordAttack();
  character->ShieldDefend();
}

int main() {
  Character* w = new Knight( "John" , 100 );
  Character* m = new Mage( "Jim" , 100 );

  std::cout << "\n--- Knight Attacks ---" << std::endl;
  performAllAttacks( w );

  std::cout << "\n--- Mage Attacks ---" << std::endl;
  performAllAttacks( m );

  // Clean up
  delete w;
  delete m;

  return 0;
}
