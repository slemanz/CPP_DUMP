#include "Sedan.hpp"

Sedan::Sedan()
{
    _isCompact = false;
    _numDoors = 2;
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