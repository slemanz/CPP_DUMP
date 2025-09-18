#include <iostream>
#include <memory>
#include "Car.hpp"

int main(void)
{
    Car *car = new Car("blue", "sabaru", "outback", 40000);
    Car car2("white", "ford", "fiesta", 10000);

    Car car3 = *car;
    car3 = car2;

    car2.addUpgrade(10);
    car3.addUpgrade(17);

    std::vector<int> upgrades = car2.getUpgrades();
    std::cout << "Car 2: ";
    for(int i = 0; i < upgrades.size(); i++)
    {
        std::cout << upgrades[i] << " ";
    }
    std::cout << std::endl;

    upgrades = car3.getUpgrades();
    std::cout << "Car 3: ";
    for(int i = 0; i < upgrades.size(); i++)
    {
        std::cout << upgrades[i] << " ";
    }
    std::cout << std::endl << std::endl;

    delete car;

    return 0;
}