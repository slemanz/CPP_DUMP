#include <iostream>
#include <memory>
#include "Car.hpp"

int main(void)
{
    Car *car = new Car("blue", "sabaru", "outback", 40000);
    Car car2("white", "ford", "fiesta", 10000);

    std::unique_ptr<Car> car3(new Car);
    Car car4 = car2;

    std::cout << "Car 1: " << car->getOdometer() << std::endl;
    std::cout << "Car 1: " << car->getFuel() << std::endl;
    std::cout << "Car 1: " << car->getPaint() << std::endl;

    // Getters (accessers) and Setters (mutators)
    car->setPaint("black");
    car->setOdometer(0);
    std::cout << "Car 1: " << car->getOdometer() << std::endl;
    std::cout << "Car 1: " << car->getPaint() << std::endl << std::endl;

    std::cout << "Car 2: " << car2.getOdometer() << std::endl;
    std::cout << "Car 2: " << car2.getFuel() << std::endl;
    std::cout << "Car 2: " << car2.getPaint() << std::endl << std::endl;

    std::cout << "Car 2: " << car2.getPaint() << std::endl;
    std::cout << "Car 4: " << car4.getPaint() << std::endl;
    car4.setPaint("purple");
    std::cout << "Car 2: " << car2.getPaint() << std::endl;
    std::cout << "Car 4: " << car4.getPaint() << std::endl << std::endl;

    delete car;

    return 0;
}