#include <iostream>

using namespace std;

// Example of recursion applied to a facotorial (e.g.: 7!)

int factorial(int k) {
    // Firts we have to define the base condition
    if (k == 1) {
        return 1;
    // Then, the rest
    } else {
        return k * factorial(k - 1);
    }
}

int main() {
    
    int results = factorial(7);
    cout << results << endl;
    return 0;

}