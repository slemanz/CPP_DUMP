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

The main() function is a special function that is called by the operating system
of the computer. We will make our own functions later, but for now just think of
main as the entry point of the program. Whatever line comes after the first '`{`'
will be the first line of code to run (in this case it's the cout line).

```cpp
cout << "Hello World" << endl;
```

"cout" is a special word that is coming from the `<iostream>` that we included. It
lets us print some text to the console. It is a stream object, and you can think
of it as something that can let a stream of data that you give to it flow to the
console

The '<<' operators (insertion operators) are like the floodgates for the stream,
and the "hello world" is the data that flows through the '<<' operator. The
"hello world" is a string type of data (A string is anything between double
quotes). We will dive into strings later.

Remember how we just talked about functions potentially returning things after
they perform their tasks. That is what this "return 0" is for. In this case, the
main function that was called by the operating system, will return 0 if the
program was able to finish and exit successfully. The '0' is essentially just a
special "exit code" that is meant to signal that everything went smoothly.