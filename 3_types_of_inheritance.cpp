
#include <iostream>
using namespace std;

// Base classes: Weapon and Armor
class Weapon
{
public:
    void attack()
    {
        cout << "Attacking with a weapon!" << endl;
    }
};

class Armor
{
public:
    void defend()
    {
        cout << "Defending with armor!" << endl;
    }
};

// Derived class: Knight (multiple inheritance)
class Knight : public Weapon, public Armor
{
public:
    void charge()
    {
        cout << "Knight charges into battle!" << endl;
    }
};

int main()
{
    Knight k;
    k.attack();
    k.defend();
    k.charge();
    return 0;
}



// #include<iostream>
// #include<string>


// class Sword
// {
// public:
//   void SwordAttack()
//   {
//     std::cout << "Attacks with Sword" << std::endl;
//   }
// };

// class Shield
// {
// public:
//   void ShieldDefend()
//   {
//     std::cout << "Defends with Shield" << std::endl;
//   }
// };


// class Character: public Sword , public Shield
// {
// public:
//   Character( std::string n , int h )
//   {
//     std::cout << "Character Constructor Called" << std::endl;
//     name = n;
//     health = h;
//   };
//   ~Character()
//   {
//     std::cout << "Character Destructor Called" << std::endl;
//   };

//   std::string name;
//   int health;

//   void displayStats()
//   {
//     std::cout << "Name: " << name << " Health: " << health << std::endl;
//   }
//   void attack()
//   {
//     std::cout << "Character Attacks" << std::endl;
//   }

// };



// class Warrior : public Character
// {
// public:
//   Warrior( std::string n , int h ) : Character( n , h )
//   {
//     //std::cout << "Warrior Constructor Called" << std::endl;
//     name = n;
//     health = h;
//   };
//   ~Warrior()
//   {
//     //std::cout << "Warrior Destructor Called" << std::endl;
//   };
// };


// int main()
// {
//   Warrior w( "John" , 100 );

//   w.displayStats();
//   w.attack();

//   w.SwordAttack();
//   w.ShieldDefend();


// }