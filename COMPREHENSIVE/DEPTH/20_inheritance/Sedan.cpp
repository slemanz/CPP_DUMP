#include "Sedan.hpp"

Sedan::Sedan()
{
    _isCompact = false;
    _numDoors = 2;
}

Sedan::~Sedan()
{
    std::cout << "Inside the Sedan destructor!" << std::endl;
}

void Sedan::setNumDoors(int doors)
{
    _numDoors = doors;
}

int Sedan::getNumDoors()
{
    return _numDoors;
}

void Sedan::setIsCompact(bool compact)
{
    _isCompact = compact;
}

bool Sedan::getIsCompact()
{
    return _isCompact;
}

std::ostream &operator<<(std::ostream &outs, const Sedan &s)
{
    outs << "SEDAN INFO: " << std::endl;
    outs << "Fuel: " << s._fuel << std::endl;
    outs << "Color: " << s._paintColor << std::endl;
    outs << "Odometer: " << s._mileage << std::endl;
    outs << "Num doors: " << s._numDoors << std::endl;
    outs << "Is compact? " << s._isCompact << std::endl;

    return outs;
}