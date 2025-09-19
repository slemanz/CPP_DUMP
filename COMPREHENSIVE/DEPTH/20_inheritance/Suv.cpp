#include "Suv.hpp"

Suv::Suv()
{
    _isAWD = false;
    _numSeats = 5;
}

void Suv::setNumSeats(int seats)
{
    _numSeats = seats;
}

int Suv::getNumSeats()
{
    return _numSeats;
}

void Suv::setIsAWD(bool awd)
{
    _isAWD = awd;
}

bool Suv::getIsAWD()
{
    return _isAWD;
}

std::ostream &operator<<(std::ostream &outs, const Suv &s)
{
    outs << "SUV INFO: " << std::endl;
    outs << "Fuel: " << s._fuel << std::endl;
    outs << "Color: " << s._paintColor << std::endl;
    outs << "Odometer: " << s._mileage << std::endl;
    outs << "Num seats: " << s._numSeats << std::endl;
    outs << "Is AWD? " << s._isAWD << std::endl;

    return outs;
}