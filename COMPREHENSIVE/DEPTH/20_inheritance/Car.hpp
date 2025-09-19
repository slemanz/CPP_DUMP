#ifndef INC_CAR_HPP
#define INC_CAR_HPP

#include <string>

class Car{
    public:
        // member function
        Car();
        Car(std::string paint, std::string brand, std::string model, int miles);
        ~Car();

        int showFuel();
        void setFuel(int fuel);

        float getOdometer();

        void setPaint(std::string color);
        std::string getPaint();

    
    private:
        int _fuel;
        std::string _paintColor;
        float _mileage;
};

#endif /* INC_CAR_HPP */
