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

std::ostream &operator<<(std::ostream &outs, const Truck &t)
{
    outs << "TRUCK INFO: " << std::endl;
    outs << "Fuel: " << t._fuel << std::endl;
    outs << "Color: " << t._paintColor << std::endl;
    outs << "Odometer: " << t._mileage << std::endl;
    outs << "Bed Length: " << t._bedLength << std::endl;
    outs << "Has full cab? " << t._isFullCab << std::endl;

    return outs;
}