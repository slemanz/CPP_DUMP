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

### Variable types

There are two types of variables we will be talking about for today's lecture:

- Normal variables - where the value stored in the variable can change
- Constant variables - where the value stored in the variable doesn't change

#### CONSTANT VARIABLE

A constant variable must be defined and initialized at the same time.
Therefore, you must know the value you are to store in it before defining it.

Name your constant variables all uppercase.

Ex:

```cpp
const int VALUE = 10;
```

### Data Types

Aaand because apples and oranges can't be added together, types were invented.

1. Types tell the variables what type of data they can hold.
2. A variable of a type is reserved space in memory.
3. Each type occupies a different memory size.

Primitive and Non-Primitive

Primitive (Built in):
| Type Name | Reserved keyword | Size |
|---|---|---|
| Boolean               | bool      | 1 byte (8 bits) |
| Character             | char      | 1 byte (8 bits) |
| Integer               | int       | 4 bytes (32 bits) |
| Floating              | float     | 4 bytes (32 bits) |
| Double floating point | double    | 8 bytes (64 bits) |

Non-primitive:

- Strings
- Structs
- Classes
- Unions
- Enums
- ETC

### Primitive Data Types

**BOOLEAN:** True or False (1 byte)
ex:

```cpp
bool gameover = true;
```

**SIGNED VS UNSIGNED:**

Now for some of the rest of the primitive data types, you should know that they
can be either signed vs unsigned.

Any unsigned variable, of any type, does not have a sign, therefore the value
stored in it is always POSITIVE.

A signed variable, on the other hand, has a sign, therefore the value stored in
it can be either POSITIVE OR NEGATIVE.

**CHARACTER:**

- char data type will store individual characters
- when assigning a value to a char variable, you must use single quotes around
the character
- the char data type is a numeric data type, that means that each character will
be stored as a number.

ex:

```cpp
char myletter = 'a';
```

**INTEGER:**

- integer variables can only hold whole numbers
- unsigned integers will hold only a positive whole number
- signed integers can hold either a positive whole number or a negative one
