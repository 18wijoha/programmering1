#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float svar, nummer, A, B;
	string userInput;
	
	cout << "Skriv in ett heltal, Skriv in räknesätt, Skriv in ett till heltal (med mellanrum)" << endl;
	cin >> A;
	cin >> userInput;
	cin >> B;
	
	if(userInput == "+") {
		svar = A + B;
	} else if(userInput == "-") {
		svar = A - B;
	} else if(userInput == "*") {
		svar = A * B;
	} else if(userInput == "/") {
		svar = A / B;
	} else {
		cout << "Error. Try again." << endl;
	}
	
	cout << "Ditt svar är: " << svar;
	
	return 0;
}
