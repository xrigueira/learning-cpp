#include <iostream>
#include <string>

using namespace std;

int main() {

    string myString[4] = {"Hello", "Hola", "Salut", "Bom dia"};

    for (int i = 0; i < 4; i++) {
        cout << i <<": " << myString[i] << endl;
    }

    int getArrayLen = sizeof(myString) / sizeof(string);
    cout << getArrayLen << endl;

    // Multi-dimensional arrays
    string letters[2][4] = {{"A", "B", "C", "D"}, {"E", "F", "G", "H"}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << endl;
        }
    }

    return 0;

}

