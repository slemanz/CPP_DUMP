# Vectors

**Somewhat similar to Arrays**

Vectors are C++ STL containers that are similar to arrays in a few ways

- You can access items in vectors and arrays in a similar fashion with the []
operator. Ex: myArray[4] = 2 and myVector[4] = 2

- They both have elements stored in a contiguous manner (Although the things in a
vector might be moved to another location**)

You can often use vectors and arrays interchangeably to solve similar problems

**But still different from arrays**

Vectors are a templated class (something we will talk about in the near future)

They have functions that can help us perform certain operations (like adding or
removing elements)

They are dynamic in nature (they can resize when necessary to accommodate more
elements. They do this by moving elements to a different larger piece of memory)

-[Vectors](vectors.cpp)
