#include <iostream>
#include "car.h"
int main() {
    int input;
    std::cout << 
    ""
    "Hello! this is a baisic OOP example.\n"
    "Please enter a speed for the car: "
    "";
    std::cin >> input;
    std::cout << "\n";
    
    std::string modelInput;
    std::cout << "enter a model for the car: ";
    std::cin >> modelInput;

    Car someCar; // create an object of type Car
    someCar.SetSpeed(input); // set the speed of the car
    std::cout << "Car speed is set to: " << someCar.GetSpeed() << std::endl; // just output the speed

    std::cout << "\n";
    someCar.SetModel(modelInput);
    std::cout << "Car model is set to: " << someCar.GetModel() << std::endl;

    return 0;    
}