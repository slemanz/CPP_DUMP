# Abstract Data Types

Up until this point...

We have just been dealing with pre-existing data types. You have been told what
these data types are and what they do (int, float, bool, char ...etc).

Now comes the time where we will make our OWN data types. Why would we do this?
We do it because we can represent abstract ideas in code. For example, the
string data type we have been using is actually something that is not baked into
the basic C++ language. It was created by someone who wanted extended
functionality.

Let's think back to the string data type. It had a member function ".length()"
that gave us the length of the string.

What if I told you to design a "car" data type? What kind of information would
be associated with it? And what type of member functions would you have for it?

You could of course have a length() function, but can you think of more
appropriate ones?

If I said that this car data type could hold a collection of variables of other
types (int, char, bool, string ...) what data would you have in these variables?

**The car data type**

What about price?

A car has a price right? If you made a price variable for this car data type,
what data type would the price variable be? An int, a float?

What about the color of the car? Would that be a string?

### Structs

There are multiple ways to associate a collection of these variables with a type
that you create. The first one I will discuss is something called a "struct"

```cpp
#include <iostream>

using namespace std;

struct car{
    int price;
    string color;
    float mpg;
};

int main(){

    return 0;
}
```

How do we access these member variables?

```cpp
#include <iostream>

using namespace std;

struct car{
    int price;
    string color;
    float mpg;
};

int main()
{
    car c;
    c.price = 20000;
    c.color = "blue"; A
    c.mpg 22.5;
    cout << c.price << " " << c.color << " " << c.mpg << endl;
    return 0;
}
```

- [Practice](practice.cpp)

### More on structs

Way to initialize:

```cpp
#include<iostream>

using namespace std;

struct Employee{
    int id;
    string name;
    char group;
    float hours;
};

int main(){
    Employee e1 = {56987, "Fred", 'c', 43.5};
    return 0;
}
```

You can have an array/vector of structs!

- [Quick challenge](quick_challenge.cpp)



