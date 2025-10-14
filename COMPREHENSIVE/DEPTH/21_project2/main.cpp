#include <iostream>
#include "Shape.hpp"
#include "Triangle.hpp"

int main(void)
{
    std::cout << "hello world!" << std::endl;

    Shape shape1(5, 10 , "blue");
    std::cout << "SHAPE1 COORDS: " << shape1.getX() << ", ";
    std::cout << shape1.getY() << "\n" << std::endl;

    Triangle triangle1(100, 200, "yellow", 2.5, 3.9);
    std::cout << triangle1 << std::endl;



    return 0;
}