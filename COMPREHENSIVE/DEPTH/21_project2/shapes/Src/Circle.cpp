#include "Circle.hpp"
#include <cmath>

Circle::Circle() : _area(0), _diameter(0), _radius(0) {};

Circle::Circle(int x, int y, std::string color, double radius) : Shape(x, y, color), _radius(radius)
{
    _diameter = 2*_radius;
    calculateCircleArea();
}

Circle::Circle(const Circle &other) : Shape(other), _area(other._area), _diameter(other._diameter), _radius(other._radius){};

double Circle::getCircleArea()
{
    return _area;
}

void Circle::calculateCircleArea()
{
    _area = M_PI * pow(_radius, 2);
}

double Circle::getDiameter()
{
    return _diameter;
}

double Circle::getRadius()
{
    return _radius;
}

double Circle::getCircumference()
{
    return 2*M_PI*_radius;
}

void Circle::setRadius(double radius)
{
    _radius = radius;
}
