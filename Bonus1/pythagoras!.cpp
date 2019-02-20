#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int roten_ur, tal1, tal2, summa;
	
	cout << "Ena Sidan" << endl;
	cin >> tal1;
	cout << "Andra Sidan" << endl;
	cin >> tal2;
	
	summa = tal1 * tal1;
	
	summa = summa + (tal2 * tal2);
	
	cout << "Summan av Kateterna: " << summa << endl;
	
	roten_ur = sqrt(summa);
	
	cout << "Hypotenusan: " << roten_ur;
	
	return 0;
}
