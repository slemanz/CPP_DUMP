#ifndef INHERITANCE_TRUCK_H_
#define INHERITANCE_TRUCK_H_

#include "Car.hpp"

class Truck : public Car
{
    public:
        Truck();
        void setBedLength(int length);
        int getBedLength();
        void setIsFullCab(bool cab);
        bool getIsFullCab();

    private:
        int _bedLength;
        bool _isFullCab;
};

#endif /* INHERITANCE_TRUCK_H_ */