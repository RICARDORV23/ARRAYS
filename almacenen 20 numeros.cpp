#include <iostream>

using namespace std;

int main() {
    const int TAMANO = 20;
    int numeros[TAMANO];
    bool yaContado[TAMANO] = {false}; 

    cout << "Ingresa 20 n�meros enteros:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << "N�mero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < TAMANO; ++i) {
        if (!yaContado[i]) {
            int frecuencia = 1;
            for (int j = i + 1; j < TAMANO; ++j) {
                if (numeros[i] == numeros[j]) {
                    frecuencia++;
                    yaContado[j] = true;
                }
            }
            cout << "El n�mero " << numeros[i] << " aparece " << frecuencia << " vez/veces." << endl;
        }
    }

    return 0;
}

