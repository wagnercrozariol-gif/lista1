#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double produto1, produto2, produto3, produto4, produto5;
    double total, pagamento, troco;
 
    cout << "======================================" << endl;
    cout << "         Calculadora de Troco         " << endl;
    cout << "======================================" << endl;
 
    cout << "\n-- Digite o valor dos produtos --" << endl;
    cout << "Produto 1: R$ ";
    cin  >> produto1;
    cout << "Produto 2: R$ ";
    cin  >> produto2;
    cout << "Produto 3: R$ ";
    cin  >> produto3;
    cout << "Produto 4: R$ ";
    cin  >> produto4;
    cout << "Produto 5: R$ ";
    cin  >> produto5;
 
    // Soma dos produtos
    total = produto1 + produto2 + produto3 + produto4 + produto5;
 
    cout << fixed << setprecision(2);
    cout << "\nTotal a pagar: R$ " << total << endl;
 
    cout << "\nDigite o valor do pagamento: R$ ";
    cin  >> pagamento;
 
    // Calculo do troco
    troco = pagamento - total;
 
    cout << "\n======================================" << endl;
    cout << "            Resumo da Compra          " << endl;
    cout << "======================================" << endl;
    cout << "Produto 1 : R$ " << produto1 << endl;
    cout << "Produto 2 : R$ " << produto2 << endl;
    cout << "Produto 3 : R$ " << produto3 << endl;
    cout << "Produto 4 : R$ " << produto4 << endl;
    cout << "Produto 5 : R$ " << produto5 << endl;
    cout << "--------------------------------------" << endl;
    cout << "Total     : R$ " << total    << endl;
    cout << "Pagamento : R$ " << pagamento << endl;
    cout << "Troco     : R$ " << troco    << endl;
    cout << "======================================" << endl;
 
    return 0;
}