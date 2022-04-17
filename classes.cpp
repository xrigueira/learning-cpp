#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        void speed(int maxSpeed) {
            cout << maxSpeed << " km/h" << endl;
        };
};

// The method can also be build outside the class in the following way:

// void Car::speed(int maxSpeed){
//     cout << maxSpeed << " km/h" << endl;
// }

int main() {

    // Create an object of that class
    Car carObject1;
    carObject1.brand = "BMW";
    carObject1.model = "X5";
    carObject1.year = 1999;

    Car carObject2;
    carObject2.brand = "Ford";
    carObject2.model = "Mustang";
    carObject2.year = 1969;

    // Print attribute values
    cout << carObject1.brand << " " << carObject1.model << " " << carObject1.year << endl;
    carObject1.speed(250);
    cout << carObject2.brand << " " << carObject2.model << " " << carObject2.year << endl;
    carObject2.speed(200);

    return 0;
}
