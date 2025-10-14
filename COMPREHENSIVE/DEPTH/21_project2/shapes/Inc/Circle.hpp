#ifndef INC_CIRCLE_HPP
#define INC_CIRCLE_HPP

#include <iostream>
#include "Shape.hpp"

class Circle : public Shape {
    public:
        Circle();
        Circle(int x, int y, std::string color, double radius);
        Circle &operator=(const Circle &other);
        friend std::ostream &operator<<(std::ostream &outs, Circle &c);
        double getCircleArea();
        double getDiameter();
        double getRadius();
        double getCircumference();
        void setRadius(double radius);
    private:
        void calculateCircleArea();
        double _area;
        double _radius;
        double _diameter;
};

#endif /* INC_CIRCLE_HPP */