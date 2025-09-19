#include <iostream>
#include <memory>
#include "Car.hpp"

int main(void)
{
    Car *car = new Car("blue", "sabaru", "outback", 40000);
    Car car2("white", "ford", "fiesta", 10000);
    Car car4("blue", "ford", "fiesta", 10000);

    Car car3 = *car;
    car3 = car2;

    car4.addUpgrade(18);
    car4.addUpgrade(32);

    //car2.addUpgrade(10);
    //car3.addUpgrade(17);

    Car car5 = *car;
    car5 = car2+car4;

    std::cout << "Car 2: ";
    car2.showUpgrades();

    std::cout << "Car 3: ";
    car3.showUpgrades();

    std::cout << "Car 4: ";
    car4.showUpgrades();

    std::cout << "Car 5: ";
    car5.showUpgrades();
    car5 = car2-car4;

    std::cout << "Car 5: ";
    car5.showUpgrades();

    if(car3 == car2)
    {
        std::cout << "Car 2 and car2 are the same" << std::endl;
    }else
    {
        std::cout << "Car 2 and car2 arent the same" << std::endl;
    }
    std::cout << std::endl;

    std::cout << car2 << std::endl;

    std::cout << "Input make/model/color for car: ";
    std::cin >> car2;
    std::cout << car2 << std::endl;


    delete car;

    return 0;
}