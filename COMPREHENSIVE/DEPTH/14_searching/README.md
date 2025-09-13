# Searching

First:

- [Challenge](challenge.cpp)

## Sequential Search

A sequential search (or linear search) is a basic algorithm for finding a
specific item within a list by examining each element one by one, from the
beginning to the end, until a match is found or the entire list is checked

- [Sequential Search](sequential_search.cpp)

**Is there a faster search?**

Our linear/sequential search has to go through every element, which makes sense.
If the elements are out of order then the thing we are looking could be anywhere
if the vector/array, so we need to check every position.

But what if all of elements were sorted in ascending order?

## Binary Search

A binary search is an efficient algorithm for finding a target value within a
sorted array. It works by repeatedly dividing the search interval in half. The
process involves comparing the target value to the middle element of the array,
then discarding the half that cannot contain the target and repeating the
process with the remaining half until the target is found or the search interval
becomes empty

- [Binary Search](binary_search.cpp)
