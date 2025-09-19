#include <iostream>
#include "Car.hpp"
#include "Truck.hpp"
#include "Sedan.hpp"
#include "Suv.hpp"


int main(void)
{
    std::cout << std::endl;

    Car car;
    Truck truck;
    Sedan sedan;
    Suv suv;

    truck.setFuel(12);
    truck.setPaint("purple");
    truck.setBedLength(8);

    sedan.setFuel(10);
    sedan.setPaint("blue");
    sedan.setNumDoors(4);

    suv.setFuel(11);
    suv.setPaint("red");
    suv.setIsAWD(true);

    // create overloaded outputs operators for each class
    std::cout << truck << std::endl;
    std::cout << sedan << std::endl;
    std::cout << suv << std::endl;

    return 0;
}