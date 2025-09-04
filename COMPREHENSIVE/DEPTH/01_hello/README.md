# Hello World - Deep Dive

The code is **[here](main.cpp)**.

The include directive just means "go search for another file, and put the code
that exists in that file right here where it says #include"

```cpp
#include <iostream>
```

In this particular case, it is saying to go fetch code from the "iostream header
file", which is a special C++ file that is stored where your compiler exists
most likely (For example minGW/include)

```cpp
using namespace std;
```

The "using namespace std" is something that lets you use the "cout" and "endl"
that come from the `<iostream>` code that was included without having to put
"std::cout" or "std::endl"

What is a function?

It's basically just a little subprogram inside your program that does some
specific task.

Ex: if your program was a car factory, and the function was a machine that made
the wheels.

```cpp
int main()
{

}
```

There can be many functions in a C++ program, but the code instructions in the
main function will be the first instructions to be executed (first code to be
run by the computer).