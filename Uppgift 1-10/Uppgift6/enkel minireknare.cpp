#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float svar, nummer, A, B;
	
	cout << "Skriv in ditt tales�tt. 1 f�r dividera, 2 f�r plus, 3 f�r minus, 4 f�r multiplicera." << endl;
	cin >> nummer;
	
	cout << "Skriv in ett heltal." << endl;
	cin >> A;
	cout << "Skriv in ett annat heltal" << endl;
	cin >> B;
	
	if(nummer == 1) {
		svar = A / B;
	} else if(nummer == 2) {
		svar = A + B;
	} else if(nummer == 3) {
		svar = A - B;
	} else if(nummer == 4) {
		svar = A * B;
	} else {
		cout << "Error. Try again." << endl;
	}
	
	cout << "Ditt svar �r: " << svar;
	
	return 0;
}
