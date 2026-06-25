#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double cotacao, dolares, reais;
 
    cout << "======================================" << endl;
    cout << "      Conversor: Dolar -> Real        " << endl;
    cout << "======================================" << endl;
    cout << "Digite a cotacao do dolar (em R$): ";
    cin  >> cotacao;
    cout << "Digite a quantidade de dolares:    ";
    cin  >> dolares;
 
    // Calculo: R$ = dolares * cotacao
    reais = dolares * cotacao;
 
    cout << fixed << setprecision(2);
    cout << "\nResultado:" << endl;
    cout << "Cotacao   : R$ " << cotacao << endl;
    cout << "Dolares   : U$ " << dolares << endl;
    cout << "Em Reais  : R$ " << reais   << endl;
    cout << "\n(Formula: R$ = U$ x cotacao)" << endl;
 
    return 0;
}
 