#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radio, area;
    
    cout << "Introduce el radio del c�rculo: ";
    cin >> radio;
    
    area = M_PI * pow(radio, 2);
    
    cout << "El �rea del c�rculo es: " << area << endl;

    return 0;
}

