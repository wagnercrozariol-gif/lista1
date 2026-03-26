#include <iostream>
using namespace std

int main(int argc, char** argv)
{
	int b;
	int h;
	int a;
	
	cout << "Informe a base do retangulo: ";
	cin >> b;
	cout << "Informe a altura do retangulo: ";
	cin >> h;
	
	a = b * h;
	
	cout << "A area do retangulo calculada: "<< a;
	return 0;
	
}