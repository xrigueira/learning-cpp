#include <iostream>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

// void for when the function does not return anything
void foo(int myNums[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNums[i] << endl;
    }
}

int main() {

    int z = sum(5, 5);
    cout << z << endl;

    int myNums[5] = {10, 20, 30, 40, 50};
    foo(myNums);

    return 0;
}