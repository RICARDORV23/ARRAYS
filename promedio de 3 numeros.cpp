#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, suma, promedio;
    
    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;
    
    cout << "Introduce el tercer n�mero: ";
    cin >> num3;
    
    suma = num1 + num2 + num3;
    promedio = suma / 3;
    
    cout << "La suma de los tres n�meros es: " << suma << endl;
    cout << "El promedio de los tres n�meros es: " << promedio << endl;

    return 0;
}

