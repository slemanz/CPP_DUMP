# Inheritance

**An "is a" relationship between multiple classes**

Sometimes we want to design our programs around an idea of a relationship
between different Abstract Data Types (ADT's). Using the car class we have so
far as an example, we might want to also create classes for different subtypes
of cars

(Trucks, Sedans, SUV's)

The relationship between a car and each of these subtypes can be defined as an
"is a" relationship. A truck is a car. A sedan is a car. An SUV is a car.

This type of relationship will drive the way we arrange and use our classes in
our program. This "is a" relationship between classes means we will use
inheritance.

Base Class -> Derived classes

### Implementation

- [main.cpp](main.cpp)
- [Car.hpp](Car.hpp)
- [Car.cpp](Car.cpp)