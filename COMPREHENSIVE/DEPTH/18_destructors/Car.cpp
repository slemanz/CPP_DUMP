#include "Car.h"

Car::Car(std::string paint, std::string brand, std::string model, int miles)
{
    _fuel = 12.5;
    _odometer = miles;
    _paintColor = paint;
    _brand = brand;
    _model = model;
}

void Car::driveCar (int miles)
{
    _odometer += miles;
    _fuel = miles/22;
}

void Car::setPaint(std::string color)
{
    _paintColor = color;
}

int Car::getOdometer() const
{
    return _odometer;
}

float Car::getFuel()
{
    return _fuel;
}

void Car::addFuel(int gallons)
{
    _fuel += gallons;
}

std::string Car::getPaint()
{
    return _paintColor;
}

std::string Car::getBrand()
{
    return _brand;
}

std::string Car::getModel()
{
    return _model;
}

void Car::setOdometer(int reset)
{
    _odometer = reset;
}

Car::Car()
{
    _fuel = 0;
    _odometer = 0;
    _paintColor = "";
    _brand = "";
    _model = "";
}

Car::Car(Car &obj)
{
    _fuel = obj._fuel;
    _odometer = obj._odometer;
    _paintColor = obj._paintColor;
    _brand = obj._brand;
    _model = obj._model;
}

Car::~Car()
{
    std::cout << "Inside the destructor! Cleaning up." << std::endl;
}