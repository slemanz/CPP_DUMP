#ifndef INC_CAR_HPP
#define INC_CAR_HPP

#include <iostream>

class Car{
    public:
        // member function
        Car(std::string paint, std::string brand, std::string model, int miles);
        ~Car();

        void driveCar(int miles);
        void setPaint(std::string color);
        void setOdometer(int reset);

        // means: doesnt modify any data from the class
        int getOdometer() const; 

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

#endif /* INC_CAR_HPP */