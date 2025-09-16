#include <iostream>

class Car{
    public:
        // member function
        Car(std::string paint, std::string brand, std::string model, int miles);

        void driveCar(int miles);
        void setPaint(std::string color);
        int getOdometer();
        std::string getPaint();
        std::string getBrand();
        std::string getModel();
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

std::string Car::getPaint()
{
    return _paintColor;
}

std::string Car::getBrand()
{
    return _brand;
}

std::string Car::getModel()
{
    return _model;
}

int main(void)
{
    Car car("blue", "sabaru", "outback", 40000);
    Car car2("white", "ford", "fiesta", 10000);

    std::cout << "Car 1: " << car.getOdometer() << std::endl;
    std::cout << "Car 1: " << car.getFuel() << std::endl;
    std::cout << "Car 1: " << car.getPaint() << std::endl;

    // Getters (accessers) and Setters (mutators)
    car.setPaint("black");
    std::cout << "Car 1: " << car.getPaint() << std::endl << std::endl;

    std::cout << "Car 2: " << car2.getOdometer() << std::endl;
    std::cout << "Car 2: " << car2.getFuel() << std::endl;
    std::cout << "Car 2: " << car2.getPaint() << std::endl;

    return 0;
}