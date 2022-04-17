#include <iostream>

using namespace std;

int main () {

    cout << "First comes the while loop" << endl;

    int i = 0;

    while (i < 7) {

        if (i == 4) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

    cout << "Second comes the for loop" << endl;
    // There are three statements in the for loop. The first one starts the variable and it is only executed once. 
    // the second one defines the contidition for the loop to run, and the third one executes that code on every iteration
    for (int i = 0; i < 7; i++) {

        if (i == 4) {
            break;
        }
        cout << i << endl;
    }

    return 0;
}


// While loop first