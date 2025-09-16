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

int main(void)
{
    return 0;
}