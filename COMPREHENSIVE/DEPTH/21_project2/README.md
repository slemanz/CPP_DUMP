# Project 2

Create 4 classes that use inheritance.

**SHAPE** - This is the base class that represents a generic shape. It should
have a color attribute, an x attribute and a y attribute (for position). It
should also have member functions to set and get the color and the coordinates
of a shape ( getX(), getY(), setX(), setY(), setColor() and getColor()).

**CIRCLE** - This is a derived class that inherits from the SHAPE class. It should
have the following attributes (data members): area, diameter and radius. It
should also have the following public member functions: getCircleArea(),
getDiameter(), getCircumference(), getRadius() and setRadius(). It should also
have a private member function called calculateCircleArea() that has the code to
calculate and set the data member area of the circle.

**RECTANGLE** - This is a derived class that inherits from the SHAPE class. It
should have the following attributes (data members): area, width, and height. It
should also have the following public member functions: getRectangleArea(),
getWidth(), getHeight(), setWidth(), setHeight() and getPerimeter(). It should
also have a private calculateRectangleArea() member function that calculates and
sets the data member area of the rectangle.

**RIGHT TRIANGLE** - This is a derived class that inherits from the SHAPE class.
It should have the following attributes (data members): area, base, height and
hypotenuse. It should also have the following public member functions:
getTriangleArea(), getBase(), getHeight(), setBase(), setHeight(),
getHypotenuse() and getPerimeter(). It should also have private member
functions called calculateTriangleArea() and calculateHypotenuse() that
calculate/set area/hypotenuse respectively.

In addition to what has been mentioned so far, each class should also have a
default constructor, a parameterized constructor, a copy constructor, an
overloaded assignment operator and an overloaded output operator (FOR ALL
CLASSES BESIDES SHAPE, for using cout with the object). The default constructors
should just set all values to zero/null/empty while the parameterized
constructor should give the user the option to provide all of the data member
values (as well as color and coordinates) as arguments for each shape object
upon initialization.

Finally, you should create a main.cpp client code file that will instantiate one
of each type of object (including the base class SHAPE) and test all of the
constructors/operators/functions for each data type. Extra Credit option: Have
all the input data for each initial shape come from an input file.

### Implementation
