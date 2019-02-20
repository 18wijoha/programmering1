#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float svar, nummer, A, B;
	
	cout << "Skriv in ditt talesätt. 1 för dividera, 2 för plus, 3 för minus, 4 för multiplicera." << endl;
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
	
	cout << "Ditt svar är: " << svar;
	
	return 0;
}
