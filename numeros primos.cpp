#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int num) {
    if (num <= 1) return false; // Los n�meros menores o iguales a 1 no son primos
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

    // Intentamos leer los n�meros desde un archivo txt
    ifstream archivo("numeros aleatorios.txt");

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo 'numeros.txt'. Generando n�meros aleatorios..." << endl;
        
        // Si el archivo no se puede abrir, generamos n�meros aleatorios
        srand(time(0));  // Inicializa el generador de n�meros aleatorios
        for (int i = 0; i < TAMANO; ++i) {
            numeros[i] = rand() % 500 + 1; // Genera n�meros aleatorios entre 1 y 500
        }
    } else {
        // Si el archivo se abri� correctamente, lo leemos
        for (int i = 0; i < TAMANO; ++i) {
            archivo >> numeros[i];
        }
        archivo.close();  // Cerramos el archivo despu�s de leer
    }

    // Contador de n�meros primos
    int contadorPrimos = 0;

    // Recorremos el arreglo y contamos cu�ntos n�meros son primos
    for (int i = 0; i < TAMANO; ++i) {
        if (esPrimo(numeros[i])) {
            contadorPrimos++;
        }
    }

    // Mostramos el resultado
    cout << "De los 100 n�meros, " << contadorPrimos << " son primos." << endl;

    return 0;
}



