# Object Oriented Programming

A common analogy for OOP is the relationship between cars and drivers.

When you enter a car, you have things like a gear shift, gas pedal, brake pedal,
steering wheel, ignition etc... This is the interface for you to operate the
vehicle. When you press the gas, the car moves. You don't concern yourself with
the how, you just want it to move. The engineers are the ones who had do design
the system that moves the vehicle when you press the gas pedal. When you bought
this car object you just expected it to work with a simple interface, you
needn't concern yourself with the blueprints of how the internals of the car
were designed. As engineers we must now concern ourselves with the design of
these objects.

**How does this relate to software?**

What makes up a car? If we were to design a software version of a car, what data
would be associated with that car, and what actions could be performed?

### Classes

Classes are the blueprints for an object. They describe the object and provide
functionality to interact with the object's data.

Car
- Fuel, paint, model, odometer
- `void driveCar(int miles);`
- `void setPaint(string color);`
- `int getOdometer();`
- `float getFuel();`
- `void addFuel(int gallons);`

**Access Specifiers**

Remember how we want certain things to be available to the driver for interface
of the car, but maybe not others? What if we don't want the users to modify the
original odometer? We have a getOdometer() function that can tell users the
odometer reading, and when the user uses the driveCar() function, we could add
miles to the odometer, but maybe we don't want the user to have direct access to
the odometer member variable. There is a way we can choose what the user has
access to.

```cpp
class Car{
    public:
        //member functions
        void driveCar (int miles);
        void setPaint(string color);
        int getodometer();
        float getFuel();
        void addFuel (int gallons);

    private:
        //member variables
        float fuel;
        std::string paintColor;
        std::string model;
        int odometer;
};
```

```cpp
int Car::getOdometer(){
    return odometer;
}

void Car::driveCar(int miles) {
    odometer += miles;
    fuel -= miles/22;
}

void Car::setPaint(std::string color) {
    paintColor = color;
}

int Car::getOdometer(){
    return odometer;
}

float Car::getFuel(){
    return fuel;
}

void Car::addFuel (int gallons){
    fuel += gallons;
}
```

- [car example](car_example.cpp)

## Using multiple files

**The header file:** This file contains the class definition/blueprint. The name
*is the same as the class but the extension is '.h' which stands for "header".

**The implementation file:** This file contains the class member function
*implementations. The name is the same as the class and the extension is '.cpp'

**The client file:** This file contains the main function and other
*functions/code that is meant for the user/developer who wants to use the class



- [Car.h](Car.h)
- [Car.cpp](Car.cpp)
- [main.cpp](main.cpp)
- [Makefile](Makefile)