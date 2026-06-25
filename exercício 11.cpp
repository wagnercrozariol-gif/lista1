#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double x, y, resultado;
 
    cout << "======================================" << endl;
    cout << "          Potenciacao: X^Y            " << endl;
    cout << "======================================" << endl;
    cout << "Digite o valor de X (base):     ";
    cin  >> x;
    cout << "Digite o valor de Y (expoente): ";
    cin  >> y;
 
    // Calculo: resultado = X elevado a Y
    resultado = pow(x, y);
 
    cout << fixed << setprecision(4);
    cout << "\nResultado:" << endl;
    cout << x << "^" << y << " = " << resultado << endl;
 
    return 0;
}