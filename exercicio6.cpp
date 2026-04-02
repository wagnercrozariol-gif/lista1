#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char**argv)
{
	double a;
	double b;
	double mg;
	cout <<"informe o valor de a: ";
	cin >> a;
	cout <<"informe o valor de b: ";
	cin >> b;

	mg=sqrt(a*b);
	cout <<"a media geometrica calculada: "<<mg;
return 0;
}
