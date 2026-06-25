
#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    const double PI = 3.14159265358979;
 
    double diametro, raio, area;
 
    cout << "======================================" << endl;
    cout << "       Area de um Circulo             " << endl;
    cout << "======================================" << endl;
    cout << "Digite o diametro do circulo: ";
    cin  >> diametro;
 
    // Raio = diametro / 2
    // Area = PI * raio^2
    raio = diametro / 2.0;
    area = PI * pow(raio, 2);
 
    cout << fixed << setprecision(2);
    cout << "\nResultado:" << endl;
    cout << "Diametro : " << diametro << endl;
    cout << "Raio     : " << raio     << endl;
    cout << "Area     : " << area     << endl;
    cout << "\n(Formula: A = PI x r^2)" << endl;
 
    return 0;
}