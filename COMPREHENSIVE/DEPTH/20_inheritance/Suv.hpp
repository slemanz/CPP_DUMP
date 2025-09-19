#ifndef INHERITANCE_SUV_H_
#define INHERITANCE_SUV_H_

#include "Car.hpp"

class Suv : public Car
{
    public:
        Suv();
        void setNumSeats(int seats);
        int getNumSeats();
        void setIsAWD(bool awd);
        bool getIsAWD();

    private:
        int _numSeats;
        bool _isAWD;
};

#endif /* INHERITANCE_SUV_H_ */