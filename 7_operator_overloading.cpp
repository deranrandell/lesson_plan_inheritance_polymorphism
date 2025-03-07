// #include <iostream>
// using namespace std;

// class Vector
// {
// public:
//   int x , y;

//   // Constructor to initialize the vector
//   Vector( int x , int y ) : x( x ) , y( y ) {}

//   // Overloading the '+' operator to add two vectors
//   Vector operator+( const Vector& other )
//   {
//     return Vector( x + other.x , y + other.y );
//   }
// };

// // Non-member function to overload the '<<' operator
// ostream& operator<<( ostream& os , const Vector& v )
// {
//   os << "(" << v.x << ", " << v.y << ")";
//   return os;
// }

// int main()
// {
//   Vector v1( 1 , 2 ) , v2( 3 , 4 );
//   Vector v3 = v1 + v2;

//   // Output v3's information using the overloaded '<<' operator
//   cout << v3 << endl; // Output: (4, 6)

//   return 0;
// }

#include <iostream>
using namespace std;

class Warrior
{
public:
  string name;
  int health , strength;
  int x , y;  // Position (as vector coordinates)

  // Constructor to initialize the Warrior's attributes
  Warrior( string name , int health , int strength , int x , int y )
    : name( name ) , health( health ) , strength( strength ) , x( x ) , y( y ) {}

  // Overloading the '+' operator to combine two Warriors' strength and position
  Warrior operator+( const Warrior& other )
  {
    // Combine strength and position
    return Warrior( name + " & " + other.name ,
      health + other.health ,
      strength + other.strength ,
      x + other.x , y + other.y );
  }
};

// Non-member function to overload the '<<' operator
ostream& operator<<( ostream& os , const Warrior& w )
{
  os << w.name << " (Health: " << w.health << ", Strength: " << w.strength
    << ", Position: (" << w.x << ", " << w.y << "))";
  return os;
}

int main()
{
  Warrior warrior1( "Thor" , 100 , 50 , 1 , 2 );
  Warrior warrior2( "Loki" , 80 , 60 , 3 , 4 );

  // Combining the warriors (adding strength and position)
  Warrior warrior3 = warrior1 + warrior2;

  // Output warrior3's information using the overloaded '<<' operator
  cout << warrior3 << endl;

  return 0;
}
