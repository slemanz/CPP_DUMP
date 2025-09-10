# Virtual Memory

Virtual Address space - We run our program and it is loaded into memory in this
area

### The stack

Function calls are represented in memory as stack frames. These frames will hold
the data that is local to the function's scope (variables created in the
function definition, parameters).

When the stack grows downward too far and overwrites memory in another section
it results in something called "stack overflow" (This can happen with those
recursive function calls)

### The heap

The heap is a place where we can store something called dynamically allocated
memory/variables

The heap is useful for storing things that might grow a lot in size. Its managed
less by the operating system and so it's a bit of a more "open" space for us to
store things.

### Memory management

We can actually use something called a "Pointer"

A pointer is just something that holds an address. An address is a number (like
the number for a parking spot). So a pointer is basically like an integer
(although we normally see addresses in hex form rather than decimal)

### Pointers

To use pointers, we need to use some symbols we are familiar with. However we
will be using those symbols in a different way...

```cpp
int main(){
    int a = 7 //Here we make an integer 'a' (it's in a function so it goes on the stack)
    int *b = &a; //Here we make a pointer called 'b' and point it to the address of 'a'
    return 0;
}
```

The signifies that 'b' is a pointer. The fact that we made it an int pointer is
irrelevant, we just do that because address it points to is most likely storing
that integer 'a'. The & is being used in a way that enables us to grab the
address of 'a'.

**But what's the point? HA, funny**

Similar to the pass-by-reference thing, a pointer can refer to an actual piece
of memory that we want to reference from another piece of code. What an array
that stores large items we are interested in referring to later on is taking up
a large piece of memory (because of the large items)? Now imagine we want to
fill another array later on with a bunch of copies of the same items that are in
the other array. We could store the copies, or we could just store the addresses
of those original items (would take up much less space).

**And if we are going to be storing big things..**

We should store them on the heap.

Since the heap is not managed the same way as the stack, we will have to manage
the memory ourselves. This means allocating and deallocating memory for our
variables, and using pointers to keep track of them.

Let's look back at the last pointer example

To store 'a' on the heap rather than the stack, we will need to use some additional syntax.

```cpp
int main(){
    int *a = new int; //This is now a pointer containing the address of 'a' on the heap
    *a = 7; //We now dereference 'a' and store the number 7 at that heap address
    return 0;
}
```

- [Dynamic memory](dynamic_memory.cpp)