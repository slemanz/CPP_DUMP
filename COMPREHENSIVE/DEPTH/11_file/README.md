# File Streams

Getting real

Reading from files is a lot more realistic than having a program that only takes
input from the console. We are about to learn how to not only read from files,
but write to them as well.

`#include <fstream>`

To read and write from files, we will need a library similar to <iostream>, but
for files instead of reading and writing to the console. Rather than the stream
being from the console, this time the stream will be flowing to and from a file.

**ifstream**

Let's first focus on reading from a file. To do this, we need create a variable
of type "ifstream" (input file stream).

Ex: `ifstream myStream;`

Next we need to connect the stream to the file we want to read from by using a
special function that can open that file.

Ex: `myStream.open("myfile.txt");`

At this point we are ready to read into a variable just like we did with console
input.

Ex:
```cpp
int mylnt;
myStream >> mylnt;
``` 

Notice that we are using "myStream" in a similar manner to "cin".
Let's head to the editor and make a small example program.

One last thing we need to do is close the filestream since we opened it

Ex: `myStream.close();`

-[example.cpp](example.cpp)

**ofstream**

To write to a file we do something very similar but instead of using the input
operator (>>) we will use the output operator (<<) similar to when we use cout.

Ex: 
```cpp
ofstream myOutStream;
myOutStream.open("output.txt");
myOutStream << mylnt;
cout << mylnt << endl;
myOutStream.close();
```

-[example2.cpp](example2.cpp)