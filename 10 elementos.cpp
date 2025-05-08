#include <iostream>

using namespace std;

int main() {
    const int TAMANO = 10;
    int arreglo1[TAMANO], arreglo2[TAMANO];
    int contadorIguales = 0;

    cout << "Ingresa 10 elementos para el primer arreglo:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> arreglo1[i];
    }

    cout << "Ingresa 10 elementos para el segundo arreglo:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> arreglo2[i];
    }

    for (int i = 0; i < TAMANO; ++i) {
        if (arreglo1[i] == arreglo2[i]) {
            contadorIguales++;
        }
    }

    cout << "El número de elementos iguales en las mismas posiciones es: " << contadorIguales << endl;

    return 0;
}

