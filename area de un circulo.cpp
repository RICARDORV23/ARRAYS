#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radio, area;
    
    cout << "Introduce el radio del círculo: ";
    cin >> radio;
    
    area = M_PI * pow(radio, 2);
    
    cout << "El área del círculo es: " << area << endl;

    return 0;
}

