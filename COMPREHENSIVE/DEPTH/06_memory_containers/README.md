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

### Examples

- [arrays](arrays.cpp)