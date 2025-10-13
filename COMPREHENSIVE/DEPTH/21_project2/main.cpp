#include <iostream>
#include "Shape.hpp"

int main(void)
{
    std::cout << "hello world!" << std::endl;

    Shape shape1(5, 10 , "blue");
    std::cout << "SHAPE1 COORDS: " << shape1.getX() << ", ";
     std::cout << shape1.getY() << "\n" << std::endl;


    return 0;
}