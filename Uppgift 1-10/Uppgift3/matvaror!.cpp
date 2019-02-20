#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float kilo, kilo2, kilopriset, summa, totala;
	
	cout << "Antal Kilo Första Varan" << endl;
	cin >> kilo;
	cout << "Antal Kilo Andra Varan" << endl;
	cin >> kilo2;
	
	cout << "Kilopriset" << endl;
	cin >> kilopriset;
	
	summa = kilopriset * (kilo + kilo2);
	
	totala = summa * 1.12;
	
	cout << "Vara Ett " << kilo << "kr" << endl;
	cout << "Vara Två " << kilo2 << "kr" << endl;
	
	cout << "Kostnaden " << summa << "kr" << endl;
	cout << "Kostnaden inkl. moms " << totala << "kr";
	
	return 0;
}
