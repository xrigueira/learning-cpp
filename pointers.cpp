#include <iostream>
#include <string>

using namespace std;

int main () {

    string food = "pizza";

    cout << food << endl;

    cout << &food << endl;

    string* pointer = &food;

    cout << pointer << endl;

    // Dereferece

    cout << *pointer << endl; // This can also be stored in a variable

    return 0;

}