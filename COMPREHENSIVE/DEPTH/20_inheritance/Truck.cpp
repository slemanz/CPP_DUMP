#include "Truck.hpp"

Truck::Truck()
{
    _bedLength = 6;
    _isFullCab = false;
}

void Truck::setBedLength(int length)
{
    _bedLength = length;
}

int Truck::getBedLength()
{
    return _bedLength;
}

void Truck::setIsFullCab(bool cab)
{
    _isFullCab = cab;
}

bool Truck::getIsFullCab()
{
    return _isFullCab;
}