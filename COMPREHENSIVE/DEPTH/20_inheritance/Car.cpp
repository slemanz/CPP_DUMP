#include <iostream>
#include "Car.hpp"

Car::Car()
{
    _fuel = 0;
    _paintColor = "white";
    _mileage = 0.0;
}

int Car::showFuel()
{
    return _fuel;
}

void Car::setFuel(int fuel)
{
    _fuel = fuel;
}

float Car::getOdometer()
{
    return _mileage;
}

void Car::setPaint(std::string color)
{
    _paintColor = color;
}

std::string Car::getPaint()
{
    return _paintColor;
}

Car::~Car()
{
    std::cout << "Inside the destructor! Cleaning up." << std::endl;
}