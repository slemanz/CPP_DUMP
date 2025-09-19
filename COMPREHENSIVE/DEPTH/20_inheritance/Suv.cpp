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