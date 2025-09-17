#include <iostream>
#include "Car.h"

int main(void)
{
    Car car("blue", "sabaru", "outback", 40000);
    Car car2("white", "ford", "fiesta", 10000);

    std::cout << "Car 1: " << car.getOdometer() << std::endl;
    std::cout << "Car 1: " << car.getFuel() << std::endl;
    std::cout << "Car 1: " << car.getPaint() << std::endl;

    // Getters (accessers) and Setters (mutators)
    car.setPaint("black");
    car.setOdometer(0);
    std::cout << "Car 1: " << car.getOdometer() << std::endl;
    std::cout << "Car 1: " << car.getPaint() << std::endl << std::endl;

    std::cout << "Car 2: " << car2.getOdometer() << std::endl;
    std::cout << "Car 2: " << car2.getFuel() << std::endl;
    std::cout << "Car 2: " << car2.getPaint() << std::endl;

    return 0;
}