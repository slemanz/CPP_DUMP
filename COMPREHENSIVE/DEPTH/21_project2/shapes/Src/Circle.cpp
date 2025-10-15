#include "Circle.hpp"
#include <cmath>

Circle::Circle() : _area(0), _diameter(0), _radius(0) {};

Circle::Circle(int x, int y, std::string color, double radius) : Shape(x, y, color), _radius(radius)
{
    _diameter = 2*_radius;
    calculateCircleArea();
}

Circle::Circle(const Circle &other) : Shape(other), _area(other._area), _diameter(other._diameter), _radius(other._radius){};

