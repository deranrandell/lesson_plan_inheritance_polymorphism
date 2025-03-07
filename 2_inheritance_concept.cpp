#include<iostream>
#include<string>


class Character
{
public:
  Character( std::string n , int h )
  {
    std::cout << "Character Constructor Called" << std::endl;
    name = n;
    health = h;
  };
  ~Character()
  {
    std::cout << "Character Destructor Called" << std::endl;
  };

  std::string name;
  int health;

  void displayStats()
  {
    std::cout << "Name: " << name << " Health: " << health << std::endl;
  }
  void attack()
  {
    std::cout << "Character Attacks" << std::endl;
  }

};

class Warrior : public Character
{
public:
  Warrior( std::string n , int h ) : Character( n , h )
  {
    std::cout << "Warrior Constructor Called" << std::endl;
    name = n;
    health = h;
  };
  ~Warrior()
  {
    std::cout << "Warrior Destructor Called" << std::endl;
  };
};


class Mage : public Character
{
public:
  Mage( std::string n , int h ) : Character( n , h )
  {
    name = n;
    health = h;
    std::cout << "Mage Constructor Called" << std::endl;
  };
  ~Mage()
  {
    std::cout << "Mage Destructor Called" << std::endl;
  };

};


int main()
{
 Warrior w("John", 100);

 w.displayStats();
 w.attack();

 Mage m("John" , 100);

 m.displayStats();
 m.attack();


}