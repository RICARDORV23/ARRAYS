#include <iostream>

using namespace std;

int main() {
    double a1, a2, a3, b1, b2, b3, productoEscalar;
    
    cout << "Introduce las componentes del primer vector (A):\n";
    cout << "a1: ";
    cin >> a1;
    cout << "a2: ";
    cin >> a2;
    cout << "a3: ";
    cin >> a3;
    
    cout << "Introduce las componentes del segundo vector (B):\n";
    cout << "b1: ";
    cin >> b1;
    cout << "b2: ";
    cin >> b2;
    cout << "b3: ";
    cin >> b3;
    
    productoEscalar = a1 * b1 + a2 * b2 + a3 * b3;
    
    cout << "El producto escalar de los vectores A y B es: " << productoEscalar << endl;

    return 0;
}

