#include <iostream>
#include "Car.hpp"

int Car::showFuel()
{
    return 0;
}

void Car::setFuel(int fuel)
{

}

float Car::getOdometer()
{

}

void Car::setPaint(std::string color)
{

}

std::string Car::getPaint()
{
}

Car::~Car()
{
    std::cout << "Inside the destructor! Cleaning up." << std::endl;
}