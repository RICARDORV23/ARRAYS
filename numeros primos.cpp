#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false; // Los números menores o iguales a 1 no son primos
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int TAMANO = 100;
    int numeros[TAMANO];

    // Intentamos leer los números desde un archivo txt
    ifstream archivo("numeros aleatorios.txt");

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo 'numeros.txt'. Generando números aleatorios..." << endl;
        
        // Si el archivo no se puede abrir, generamos números aleatorios
        srand(time(0));  // Inicializa el generador de números aleatorios
        for (int i = 0; i < TAMANO; ++i) {
            numeros[i] = rand() % 500 + 1; // Genera números aleatorios entre 1 y 500
        }
    } else {
        // Si el archivo se abrió correctamente, lo leemos
        for (int i = 0; i < TAMANO; ++i) {
            archivo >> numeros[i];
        }
        archivo.close();  // Cerramos el archivo después de leer
    }

    // Contador de números primos
    int contadorPrimos = 0;

    // Recorremos el arreglo y contamos cuántos números son primos
    for (int i = 0; i < TAMANO; ++i) {
        if (esPrimo(numeros[i])) {
            contadorPrimos++;
        }
    }

    // Mostramos el resultado
    cout << "De los 100 números, " << contadorPrimos << " son primos." << endl;

    return 0;
}



