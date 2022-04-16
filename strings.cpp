#include <iostream>
#include <string>

using namespace std;

int main() {

    string myString = "Hello, this is Xurxo.";

    // To get the lenghs of a string
    cout << myString.size() << endl;

    // To access an item
    cout << myString[0] << endl; 

    // Now, change the H for a J and print the new string
    myString[0] = 'J'; // Remember to use single quotes
    cout << myString << endl;

    return 0;
}