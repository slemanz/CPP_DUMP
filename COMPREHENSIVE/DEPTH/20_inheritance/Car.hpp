#ifndef INC_CAR_HPP
#define INC_CAR_HPP

#include <string>
#include <iostream>

class Car{
    public:
        // member function
        Car();
        ~Car();

        int showFuel();
        void setFuel(int fuel);

        float getOdometer();

        void setPaint(std::string color);
        std::string getPaint();

    
    protected:
        int _fuel;
        std::string _paintColor;
        float _mileage;
};

#endif /* INC_CAR_HPP */
