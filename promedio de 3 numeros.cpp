#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, suma, promedio;
    
    cout << "Introduce el primer número: ";
    cin >> num1;
    
    cout << "Introduce el segundo número: ";
    cin >> num2;
    
    cout << "Introduce el tercer número: ";
    cin >> num3;
    
    suma = num1 + num2 + num3;
    promedio = suma / 3;
    
    cout << "La suma de los tres números es: " << suma << endl;
    cout << "El promedio de los tres números es: " << promedio << endl;

    return 0;
}

