# Functions

**Programming Styles**

What we have been doing so far is something called "Procedural programming". We
have been making programs that use control structures (like loops and
conditional statements) and follows a sort of top down approach to solving
problems (we declare some variables, then do some calculations and then show our
results). We will continue on with procedural programming for a while but will
introduce a "modular programming" part of it where we still follow this top down
approach but we will also use functions to help use break up the work that needs
to be done.

**So what do functions really do and what is their purpose?**

The purpose of functions is to divide up the work your program needs to do.

Just like the main function, we can make other functions so main doesn't have to
do all the work. Instead, main can call those other functions and have them
perform specific tasks.

### Defining a function vs calling a function

**The definition:**

```cpp
void myFunction()
{
    cout << "Hello" << endl;
}
```

- [function.cpp](function.cpp)

- [problem.cpp](problem.cpp)