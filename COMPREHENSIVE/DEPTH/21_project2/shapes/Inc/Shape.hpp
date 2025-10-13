#ifndef INC_SHAPE_HPP
#define INC_SHAPE_HPP

#include <iostream>

class Shape{
    public:
        Shape();
        Shape(int x, int y, std::string color);
        Shape(const Shape &other);
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);

    protected:
        int _x;
        int _y;
        std::string _color;
};


#endif /* INC_SHAPE_HPP */