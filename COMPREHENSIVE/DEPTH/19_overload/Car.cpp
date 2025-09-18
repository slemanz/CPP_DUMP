#include <iostream>
#include "Car.hpp"

Car::Car(std::string paint, std::string brand, std::string model, int miles)
{
    _fuel = 12.5;
    _odometer = miles;
    _paintColor = paint;
    _brand = brand;
    _model = model;
    _upgradeCodes = new std::vector<int>();
    _upgradeCodes->push_back(1);
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

void Car::addUpgrade(int code)
{
    _upgradeCodes->push_back(code);
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

std::vector<int> Car::getUpgrades()
{
    return *_upgradeCodes;
}

Car::Car()
{
    _fuel = 0;
    _odometer = 0;
    _paintColor = "";
    _brand = "";
    _model = "";
    _upgradeCodes = new std::vector<int>();
    _upgradeCodes->push_back(1);
}

Car::Car(Car &obj)
{
    _fuel = obj._fuel;
    _odometer = obj._odometer;
    _paintColor = obj._paintColor;
    _brand = obj._brand;
    _model = obj._model;
    _upgradeCodes = new std::vector<int>();
    for(int i = 0; i < obj._upgradeCodes->size(); i++)
    {
        auto temp = *(obj._upgradeCodes);
        this->_upgradeCodes->push_back(temp[i]);
    }
}


Car::~Car()
{
    std::cout << "Inside the destructor! Cleaning up." << std::endl;
}