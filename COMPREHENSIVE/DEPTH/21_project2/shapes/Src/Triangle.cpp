#include "Triangle.hpp"
#include <cmath>

Triangle::Triangle() : _height(0), _area(0), _base(0), _hypotenuse(0){}

Triangle::Triangle(int x, int y, std::string color, double base, double height) : Shape(x, y, color), _base(base), _height(height)
{
    calculateTriangleArea();
    CalculateHypotenuse();
}

Triangle::Triangle(const Triangle &other) : Shape(other), _area(other._area), _hypotenuse(other._hypotenuse), _height(other._height),
_base(other._base){};

void Triangle::CalculateHypotenuse()
{
    _hypotenuse = sqrt(pow(_base, 2) + pow(_height, 2));
}

void Triangle::calculateTriangleArea()
{
    _area = (_base*_height)/2;
}

double Triangle::getTriangleArea()
{
    return _area;
}


double Triangle::getBase()
{
    return _base;
}

double Triangle::getHeight()
{
    return _height;
}

double Triangle::getHypotenuse()
{
    return _hypotenuse;
}

double Triangle::getPerimeter()
{
    return _base+_height+_hypotenuse;
}

void Triangle::setBase(double base)
{
    _base = base;
}

void Triangle::setHeight(double height)
{
    _height = height;
}