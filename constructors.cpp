// Do the example
#include <iostream>
#include <string>

using namespace std;

// Define the class with the constructor
class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z) { // This is the constructor
            brand = x;
            model = y;
            year = z;
    }
};

// Creat objects using the constructor

int main () {

    Car carObject1("BMW", "X5", 1999);
    Car carObject2("Ford", "Mustand", 1969);

    // Print values
    cout << carObject1.brand << " " << carObject1.model << " " << carObject1.year << endl;
    cout << carObject2.brand << " " << carObject2.model << " " << carObject2.year << endl;
    return 0;
    }