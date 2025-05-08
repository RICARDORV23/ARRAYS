#include <iostream>

using namespace std;

int main() {
    const int NUM_ESTUDIANTES = 30;
    double calificaciones[NUM_ESTUDIANTES];
    double suma = 0, promedio;
    int estudiantesArribaDelPromedio = 0;

    // Leer las calificaciones de los estudiantes
    cout << "Introduce las calificaciones de los " << NUM_ESTUDIANTES << " estudiantes:\n";
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Estudiante " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    // Calcular el promedio general
    promedio = suma / NUM_ESTUDIANTES;

    // Contar cuántos estudiantes están por encima del promedio
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        if (calificaciones[i] > promedio) {
            estudiantesArribaDelPromedio++;
        }
    }

    // Mostrar el promedio y cuántos están por encima
    cout << "\nEl promedio general de las calificaciones es: " << promedio << endl;
    cout << "Número de estudiantes por encima del promedio: " << estudiantesArribaDelPromedio << endl;

    return 0;
}

