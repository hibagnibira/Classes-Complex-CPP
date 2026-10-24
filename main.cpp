#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex c1(3, 4);
    Complex c2(2, 3);

    cout << "c1 = "; c1.afficher();
    cout << "c2 = "; c2.afficher();

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = "; c3.afficher();

    Complex c4 = c1 - c2;
    cout << "c1 - c2 = "; c4.afficher();

    Complex c5 = c1 * c2;
    cout << "c1 * c2 = "; c5.afficher();

    Complex c6 = c1 / c2;
    cout << "c1 / c2 = "; c6.afficher();

    Complex c7 = c1 + 5.5;
    cout << "c1 + 5.5 = "; c7.afficher();

    Complex c8 = 10.0 - c1;
    cout << "10.0 - c1 = "; c8.afficher();

    if (c1 > c2) {
        cout << "Le module de c1 est supérieur à celui de c2." << endl;
    } else {
        cout << "Le module de c1 n'est pas supérieur à celui de c2." << endl;
    }

    return 0;
}