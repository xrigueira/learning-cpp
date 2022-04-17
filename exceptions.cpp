#include <iostream>

using namespace std;

int main() {
    
    try {
        int age = 18;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw (age);
        }
    }

    catch (int myNum) {
        cout << "Access denied - you must be at least 18 years old" << endl;
        cout << "Your current age is: " << myNum << endl;
    }

    return 0;

}