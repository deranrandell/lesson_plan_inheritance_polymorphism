# Lesson Pla on Inheritance and Polymorphism

## Overview
This was created as a lesson plan to explaing OOP concepts such as inheritance and polymorphism to Junior C++ Devs. It includes various examples demonstrating object-oriented programming (OOP) concepts, operator overloading, polymorphism, inheritance, and abstract classes.

## Features
- **Inheritance & Polymorphism**: Demonstrates base and derived classes with virtual functions.
- **Operator Overloading**: Showcases how to overload operators such as `+` and `<<`.
- **Abstract Classes & Interfaces**: Implements abstract base classes to enforce method definitions.
- **Memory Management**: Proper usage of constructors and destructors to manage dynamic memory.

## Getting Started
### Prerequisites
- A C++ compiler (GCC, Clang, or MSVC)
- C++17 or later

### Compilation & Execution
To compile the project using g++:
```sh
 g++ main.cpp -o program
 ./program
```

## Code Examples
### Inheritance & Polymorphism
```cpp
class Character {
public:
    virtual void attack() {
        std::cout << "Character Attacks!" << std::endl;
    }
    virtual ~Character() {}
};

class Warrior : public Character {
public:
    void attack() override {
        std::cout << "Warrior attacks fiercely!" << std::endl;
    }
};
```

### Operator Overloading
```cpp
class Vector {
public:
    int x, y;
    Vector(int x, int y) : x(x), y(y) {}
    Vector operator+(const Vector& other) {
        return Vector(x + other.x, y + other.y);
    }
};
```

## License
This project is open-source and free to use for educational purposes.


