#include <iostream>

using namespace std;

struct icecream
{
    string brand;
    string flavour;
    int number;
};

int main() {

    icecream helado1;    
    helado1.brand = "Frigo";
    helado1.flavour = "Choco";
    helado1.number = 100;

    icecream helado2;
    helado2.brand = "Magnum";
    helado2.flavour = "Lemon";
    helado2.number = 20;

    cout << "Flavour of the first icecream: " << helado1.flavour << " Number of units of the first icecream: " << helado1.number << endl;
    cout << "Flavour of the first icecream: " << helado2.flavour << " Number of units of the first icecream: " << helado2.number << endl;

}