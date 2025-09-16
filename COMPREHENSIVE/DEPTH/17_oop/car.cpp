#include <iostream>

class Car{
    public:
        // member function
        void driveCar(int miles);
        void setPaint(std::string color);
        int getOdometer();
        float getFuel();
        void addFuel(int gallons);
    
    private:
        // member variables
        float fuel;
        std::string paintColor;
        std::string model;
        int odometer;
};

void Car::driveCar (int miles)
{
    odometer += miles;
    fuel = miles/22;
}

void Car::setPaint(std::string color)
{
    paintColor = color;
}

int Car::getOdometer()
{
    return odometer;
}

float Car::getFuel()
{
    return fuel;
}

void Car::addFuel(int gallons)
{
    fuel += gallons;
}

int main(void)
{
    return 0;
}