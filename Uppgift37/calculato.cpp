#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int A, B, svar;
string userInput;

int calculator() {
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
}

int main() {
	
	cout << "Skriv in ett heltal, Skriv in r�knes�tt, Skriv in ett till heltal (med mellanrum)" << endl;
	cin >> A;
	cin >> userInput;
	cin >> B;
	
	calculator();
	
	cout << "Ditt svar �r: " << svar;
	
	return 0;
}
