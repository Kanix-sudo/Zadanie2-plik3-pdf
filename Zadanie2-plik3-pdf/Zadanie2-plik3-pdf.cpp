// Wojtek Szyjka 2020 //


#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

const float Pi = 3.1415;
float r;
float ok;
float pk;
float pc;
float obk;
float ulg; 
float uld;
int main() {
	cout << "Witaj, podaj promien : "; 
	cin >> r;
	ok = 2 * Pi * r;
	pk = Pi * r;
	pc = (r * r) * 4 * Pi ;
	ulg = 4;
	uld = 3;
	obk = (ulg / uld) * Pi * (r * r * r);

	cout << "Obwód kola = "<< ok << endl;
	cout << "Pole kola = " << pk << endl;
	cout << "Powierzchnia calkowita kuli = " <<  pc << endl;
	cout << "Objetosc kuli = " << obk << endl;
	return (0);
}