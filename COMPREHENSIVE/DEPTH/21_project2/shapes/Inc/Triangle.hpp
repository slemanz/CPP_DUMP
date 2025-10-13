#ifndef INC_TRIANGLE_HPP
#define INC_TRIANGLE_HPP

#include <iostream>
#include "Shape.hpp"

class Triangle : public Shape {
    public:
        Triangle();
        Triangle(int x, int y, std::string color, double base, double height);
        Triangle(const Triangle &other);
        Triangle &operator=(const Triangle &t);
        friend std::ostream &operator<<(std::ostream &outs, Triangle &t);
        double getTriangleArea();
        double getBase();
        double getHeight();
        double getHypotenuse();
        double getPerimeter();
        void setBase(double base);
        void setHeight(double height);
    
    private:
        void calculateTriangleArea();
        void CalculateHypotenuse();
        double _area;
        double _base;
        double _height;
        double _hypotenuse;
};

#endif /* INC_TRIANGLE_HPP */