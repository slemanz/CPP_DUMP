# Destructors

In C++, a destructor is a special member function of a class that is
automatically invoked when an object of that class is destroyed or goes out of
scope. Its primary purpose is to perform cleanup tasks and release resources
that the object may have acquired during its lifetime. 

### Smart Pointers

Smart pointers in C++ are objects that act like raw pointers but provide
automatic memory management, helping to prevent memory leaks and dangling
pointers. They encapsulate raw pointers and manage the lifetime of the
dynamically allocated objects they point to, typically using the Resource
Acquisition Is Initialization (RAII) idiom.

### Copy Constructor

A copy constructor in C++ is a special type of constructor that initializes a
new object using an existing object of the same class. It is invoked when an
object is created as a copy of another object. 