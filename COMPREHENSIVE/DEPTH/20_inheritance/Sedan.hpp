#ifndef INHERITANCE_SEDAN_H_
#define INHERITANCE_SEDAN_H_

#include "Car.hpp"

class Sedan : public Car
{
    public:
        Sedan();
        void setNumDoors(int doors);
        int getNumDoors();
        void setIsCompact(bool compact);
        bool getIsCompact();
        friend std::ostream &operator<<(std::ostream &outs, const Sedan &s);

    private:
        int _numDoors;
        bool _isCompact;
};

#endif /* INHERITANCE_SEDAN_H_ */