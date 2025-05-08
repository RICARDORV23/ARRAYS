#include <iostream>

using namespace std;

int main() {
    const int TAMANO = 10;
    int numeros[TAMANO];

    cout << "Ingresa 10 n�meros enteros:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << "N�mero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int ultimo = numeros[TAMANO - 1];

    for (int i = TAMANO - 2; i >= 0; --i) {
        numeros[i + 1] = numeros[i];
    }

    numeros[0] = ultimo;

    cout << "Arreglo despu�s de rotar una posici�n hacia la derecha:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

