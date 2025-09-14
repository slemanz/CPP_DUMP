# Project

ou are tasked to make a program that reads in from a text file, sorts the
incoming data, and then lets a user search for a specific name in that data.


The input file should contain a series of lines that are in the form of :
name<string> age<int>


When your program is run, it should first read each line of the file into a
string, then put each one of those strings into a vector or array. This
array/vector must end up in sorted order, so it is up to you whether you want to
attempt to sort the input as it is read-in from the file, or just read in the
entire file contents into the array/vector and then sort the array/vector
afterwards.

Your program should then ask the user to enter a name to search so an age for
that name can be returned to the user. Your program should use BINARY SEARCH to
search for the name.


DO NOT RELY ON THE INPUT BEING LOWERCASE (you must handle this in your program)

- [Project](project.cpp)