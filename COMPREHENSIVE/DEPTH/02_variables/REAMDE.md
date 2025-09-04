# Variables and Data types

### Variables

- A variable is a container that we use to store a value
- We name the variable whatever we want, *following the rules*
- When we create a variable, we must know the type of variable we want to create
(ex. whole number will be of type int(integer))
- A variable gets assigned a memory address where the value will be stored at
- To store a value in a variable we need to use the "=", called "assignment operator"

### Naming a variable

There are a few rules to keep in mind when we create variables:

- a variable name must start with either a letter(a-z/A-Z) or an underscore (_)
- a variable name cannot start with a number
- after the first character of the name, you can use any combination of letters(a-z/A-Z) or numbers
- uppercase and lowercase are different
- you should call you variable a meaningful name
- you cannot use any words that C++ reserves for syntax, ex: int, using, etc

### Creating a Variable

All variables you plan to use in your program MUST be defined before using them.
Otherwise, the program doesn't know what those words are.

There are two ways of declaring variables:

- define without initializing
- define and initialize

#### Defining a variable without initialization

This is a simple definition, where you create a variable and you do not assign a
value to it yet, in this case, a value may still exist in the freshly created
variable (the existing value is called garbage)

ex:

```cpp
int value;
// this variable will store a value of type int, and the name of the variable is value.
value = 10;
//this will store 10 in the value variable after the variable already exists
```

#### Defining a variable with initialization

This means you will define and initialize the variable on the same line.
It will look like this:

```cpp
int value = 10;
int value(10);  //all these statements do the same thing. Create value variable
int value {10}; //and assign 10 to it.
```

By doing this, we know from the beginning what value is stored in this variable,
and we can use that value right away.

### Scope of a variable

Scope refers to the program area that has access to your variable.

A variable must be defined, therefore exist before your program is trying to use
that variable.

So, if you plan to use a variable, you must define it above the code lines that
are trying to use it.