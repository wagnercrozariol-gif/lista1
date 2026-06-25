#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double celsius, fahrenheit;
 
    cout << "======================================" << endl;
    cout << "   Conversor: Celsius -> Fahrenheit   " << endl;
    cout << "======================================" << endl;
    cout << "Digite a temperatura em Celsius: ";
    cin  >> celsius;
 
    // Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
 
    cout << fixed << setprecision(2);
    cout << "\nResultado:" << endl;
    cout << celsius    << " grau(s) Celsius = "
         << fahrenheit << " grau(s) Fahrenheit" << endl;
    cout << "\n(Formula: F = (C x 9/5) + 32)" << endl;
 
    return 0;
}