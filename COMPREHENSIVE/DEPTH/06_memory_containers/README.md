# Memory and Containers

**Where does the information in our code get stored?**

We talked a bit about the compilation process, but what happens when we run our
program?

- Our executable (binary) program gets loaded into a place we call "Virtual
Memory"

NOTE: Operating systems and memory management are complex topics, so we are just
looking at a massively high level overview right now.

**What is this virtual memory thing?**

We call it Virtual because it's not a physical thing. RAM and the HDD are
physical storage locations. Where our program gets stored is a complex thing
that is managed by a part of the operating system on your computer, but it
basically gets loaded into RAM when we tell our computer to run the program.

- Volatile (only temporary, goes away when computer turns off)
- Non-Volatile (Doesn't go away when computer turns off)

### This virtual memory land has addresses

Imagine virtual memory as a incredibly huge parking lot.

The parking lot has different areas based on what type of cars are allowed to
park there (there are different sections of memory).

Each parking space is the same size and has a number associated with it so you
can find your car (an Address).

The memory Addresses are represented in Hexadecimal
- form Ex: 0xFFFFFFFF or 0x00000000

### Containers

It's great and all that we can use these variables in our programs, but it
limits us quite a bit...

A Wouldn't it be nice if we could store more than one piece of data? Maybe we
want to group a bunch of cars together and park them next to each other?

### Array

**What is an array?**

- A container that can hold multiple values of the same data type;
- has a size;
- contiguous in memory;
- homogenous
- accessing elements is done through subscripting subscripting
- at the moment of creation of an array, a chunk of contiguous memory is put aside
for the entire array

**Array Declaration:**

```cpp
dataType arrayName[ArraySize];
```

We must know the size before we declare an array, the size variable must be a
constant because the array size cannot change. Once declared, an array will have
the same size until the program finishes.

**Array Declaration using an initialization list:**

```cpp
//let's say we have a list of numbers: 1, 2, 3, 4
const int SIZE = 4; //because we have 4 elements
int numbers[SIZE] = {1, 2, 3, 4};
```

**Array definition using Partial Array Initialization:**

- when you initialize an array, you don't have to initialize all of it's
elements, but you can initialize the first few elements only
- the array elements will be initialized in order, starting from position 0
onwards for as many elements as you are provinding
- the rest of the elements will be initialized to something, depending of the
data type(ex: int will be initialized to 0, string to " ", etc)

**Array Declaration using implicit array sizing:**

- You must know all the elements you want to store in the array beforehand for
array initialization at the moment of declaration
- An array's initialization list cannot have more values than the array has elements.
- the size no longer has to be declared in this case, but it is "known" by you

```cpp
int numbers[] = {1, 2, 3, 4};
```

**Finding out the size when you don't know the size:**

This is to be used when you have declared and fully initialized the array using
implicit array sizing but not only.

Store the computed size in a variable for later use:
```cpp
const int ARRAYSIZE = sizeof(arrayName)/sizeof(arrayName[0]);
```

This divides the number of bytes allocated for the entire array

with the number of bytes allocated for only one element of the array,

Therefore computing the number of elements in the array, which is the ARRAYSIZE.

**Example codes:**

- [arrays](arrays.cpp)
- [string](string.cpp)