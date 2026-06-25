#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    // 1 milha marítima = 1852 metros = 1,852 km
    const double METROS_POR_MILHA = 1852.0;
    const double METROS_POR_KM    = 1000.0;
    const double KM_POR_MILHA     = METROS_POR_MILHA / METROS_POR_KM;
 
    double milhas, quilometros;
 
    cout << "======================================" << endl;
    cout << "  Conversor: Milhas Maritimas -> Km   " << endl;
    cout << "======================================" << endl;
    cout << "Digite a quantidade de milhas maritimas: ";
    cin  >> milhas;
 
    quilometros = milhas * KM_POR_MILHA;
 
    cout << fixed << setprecision(3);
    cout << "\nResultado:" << endl;
    cout << milhas      << " milha(s) maritima(s) = "
         << quilometros << " quilometro(s)" << endl;
    cout << "\n(1 milha maritima = 1852 m = 1,852 km)" << endl;
 
    return 0;
}