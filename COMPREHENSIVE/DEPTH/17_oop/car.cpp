#include <iostream>

class Car{
    public:
        // member function
        Car(std::string paint, std::string brand, std::string model, int miles);

        void driveCar(int miles);
        void setPaint(std::string color);
        int getOdometer();
        float getFuel();
        void addFuel(int gallons);
    
    private:
        // member variables
        float _fuel;
        std::string _paintColor;
        std::string _brand;
        std::string _model;
        int _odometer;
};

Car::Car(std::string paint, std::string brand, std::string model, int miles)
{
    _fuel = 12.5;
    _odometer = miles;
    _paintColor = paint;
    _brand = brand;
    _model = model;
}

void Car::driveCar (int miles)
{
    _odometer += miles;
    _fuel = miles/22;
}

void Car::setPaint(std::string color)
{
    _paintColor = color;
}

int Car::getOdometer()
{
    return _odometer;
}

float Car::getFuel()
{
    return _fuel;
}

void Car::addFuel(int gallons)
{
    _fuel += gallons;
}

int main(void)
{
    Car car("blue", "sabaru", "outback", 40000);

    std::cout << car.getOdometer() << std::endl;
    std::cout << car.getFuel() << std::endl;

    return 0;
}