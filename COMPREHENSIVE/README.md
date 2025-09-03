# Comprehensive

This repository can be useful for someone who has zero programming experience, or
for experienced developers who want to refresh on Data Structures and Algorithms
concepts for interviews.

We don't only want you to understand how to write code. We also want you to
understand what goes on behind the scenes. Because of this, in addition to
programming/DS/Algo we will cover:

- Compilation
- Multiple debugger options
- Binary and Hexadecimal number systems
- Command Line fundamentals
- Computer Memory Layout

We have 2 main sections

- Programming (using the C++ language)
- Data Structures and Algorithms (using the C++ language)

Section 1
- Programming Fundamentals (C++ Basics)
- Procedural Programming
- Object Oriented Programming (Polymorphism, Inheritance, Encapsulation)

Section 2
- Introductory Data Structures and Big O notation
- Essential Data structures and Algorithm concepts
- Algorithm Analysis and Algorithmic Design Strategies

### Why do we use C++?

C++ is a very useful language for teaching important computer science topics.

Although it can be considered a fairly "High-Level Language" it allows for a
slightly lower level programming experience if desired. It is not necessarily an
Object Oriented Programming language like Java, but we can still do Object
Oriented Programming in C++.

Because you can have a more fine-grained level of control with C++, it is often
used for Engineering applications that require precision and speed.

However, it will also set you up to pick up other programming languages very
quickly.

### Intro Computer Science

Computers have come a long way....

So have computer programming languages...

But they still rely on the same fundamentals.

Whatever code you end up writing, it all needs to be turned into a series of
ones and zeros for the computer to understand it.

The ones and zeros are referred to as the "Binary" number system.
- Ex: 100110101

So all of the computer code that we write will need to be translated into this
binary number system, before the computer can run the code (we also refer to
these ones and zeros as machine code and/or "bits").

But don't worry...

We don't actually have to do the translation. Luckily, we can just type a small
command or just click a button, and it will get translated automatically.

This is thanks to the work of other people who made these systems that will make
our lives much easier.

Let's take a look at what a computer program is and how it goes from someone
writing the code to the computer running the code

```
┌─────────────────┐    ┌──────────────────────┐    ┌──────────────────────┐
| Computer code   |    | Code gets Translated |    | Computer can now run |
| written here in |───>| into                 |───>| the code that has    |
| this file       |    | machine code         |    | been translated      |
└─────────────────┘    └──────────────────────┘    └──────────────────────┘
    my_code.cpp         Compiler or Interpreter
```

Obs: this is a very high-level overview

### Bits and Bytes

Bit
- a binary digit (1 - 0)
- The smallest increment of data on a computer

Byte
- 4 bits are called a nibble
- 8 bits form a byte
- bytes are used to represent data

Bigger picture
- 1 Byte = 8 bits
- 1 KB (kilobyte) = 1024 Bytes
- 1 MB (megabyte) = 1,048,576 Bytes
- 1 GB (gigabyte) = 1.073.741.824 Bytes
- 1 TB (terabyte) = 1.099.511.627.776 Bytes

Bit significance refers to the importance or weight of an individual bit within
a binary number or data set, with the most significant bit (MSB) having the
highest positional value and a greater impact on the overall quantity than the
least significant bit (LSB), which has the lowest value.

Hexadecimal
- BASE 16: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F.

### First program

To compile the **[first program](first_program.cpp)** uses:

```bash
g++ -o run first_program.cpp
```

Then, run the code:

```bash
./run
```


