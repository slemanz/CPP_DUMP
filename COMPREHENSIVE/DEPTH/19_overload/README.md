# Overloading Operators

**Operations on ADT's**

When you are working with numbers everything is pretty straightforward right?

int a = 5... then say a = 7 ... now 'a' holds the value 7 right?

Or maybe a = a +5 then 'a' would hold the value 10 right?

What if you did the same thing with an object?

To use these operators with ADT's rather than the standard data types, we will
need to create our own member functions that define how to perform operations on
these custom objects. This is what we will be discussing in the next few
lectures.

### Assignment Operator

The first operator we are going to overload is the assignment operator. This is
very similar to what we have already done with the copy constructor. By default,
assigning an object to another object will have the same effect as what we
noticed with the default copy constructor. If we do not overload the '='
operator, then we will get a shallow version of the object (Remember that the
shallow copy was not good when we discussed the copy constructor because it just
made a copy of the pointer rather than allocating new memory). We will run into
an issue where when we assign an object to another object, if they have pointer
data member variables, then those variables will point to the same memory. We
must come up with a custom way of assignment... so let's head to the editor to
discuss the syntax...

### Addition and Subtraction

To overload the addition operator for a class, you define a member function
named `operator+`.

Similarly, to overload the subtraction operator, you define a member function
named `operator-`.

