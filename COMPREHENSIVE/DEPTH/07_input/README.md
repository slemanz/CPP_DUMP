# Input - The CIN object

**What is the "cin” object?**

We have already seen the "cout" object for output streams. "cin" is very similar
but instead is an input stream.

When we use "cin" in c++ code we are able to capture keyboard input.

- This keyboard input is saved to something called the "keyboard buffer" (Just
imagine it as a magic array that happens behind the scenes)

Rather than using the stream insertion operator (<< is used for cout) we will
flip it around and call it the "stream extraction operator". cin >> aVariable;

**The most basic example**

Declare a variable: `int myInt;`

Use "cin" to read into the variable: `cin >> mylnt;`

When you run the program in the console and the cin line is reached, the program
will stall and wait for you to type something and press the ENTER key.

cin will then automatically attempt to convert whatever you type as input into
an integer that can be stored in the "myInt" variable you created. (This is an
important detail as we will soon see)

- **[Example 1](example1.cpp)**
- **[Input.cpp](input.cpp)**

**What if we want to read in someone's full name...**

To fix this problem we can use something called the "getline()" function

To use getline() we are going to put two things inside the parentheses that will
be separated by a comma:

- The cin object
- The string variable we want to read into

- **[Example 2](example2.cpp)**

There is also a cool little function called "get()"

This one just reads in a single character, but like getline() it doesn't refuse
whitespace characters. We won't be using it much until we deal with reading
input from files. But it can be a handy for pausing your program.