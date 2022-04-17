#include <iostream>

using namespace std;

// Set up the first class
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound" << endl;
        }
};

// Set up the derived class
class Pig: public Animal {
    public:
    void animalSound() {
        cout << "The pig says: wee wee" << endl;
    }
};

class Dog: public Animal {
    public:
    void animalSound() {
        cout << "The dog says: bow bow" << endl;
    }
};

int main() {

    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}