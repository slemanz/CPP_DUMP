#ifndef INC_CAR_HPP
#define INC_CAR_HPP

#include <string>
#include <vector>

class Car{
    public:
        // member function
        Car();
        Car(std::string paint, std::string brand, std::string model, int miles);
        Car(Car &obj);
        ~Car();
        Car &operator=(const Car &obj);
        Car operator-(const Car &obj);
        Car operator+(const Car &obj);
        bool operator==(const Car &obj);

        void driveCar(int miles);
        void setPaint(std::string color);
        void setOdometer(int reset);
        void addUpgrade(int code);
        void addFuel(int gallons);

        // means: doesnt modify any data from the class
        int getOdometer() const; 

        std::string getPaint();
        std::string getBrand();
        std::string getModel();
        float getFuel();

        void showUpgrades();

    
    private:
        // member variables
        float _fuel;
        std::vector<int> *_upgradeCodes;
        std::string _paintColor;
        std::string _brand;
        std::string _model;
        int _odometer;
};

#endif /* INC_CAR_HPP */