#define CAR_H

#include <string>

using namespace std;

class Car {
private: // here are the private members of the class
    int speed;
    int weight;
    string model;

public: // next are the public members of the class
    int GetSpeed() {return speed;};
    void SetSpeed(int s) {speed = s;};

    void SetModel(std::string m) {model = m;};
    string GetModel() {return model;};

};
