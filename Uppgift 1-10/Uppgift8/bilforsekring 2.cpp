#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int artal, arsmodell, forsekring;
	
	cout << "Aktuellt �rtal" << endl;
	cin >> artal;
	
	cout << "Bilens �rsmodell" << endl;
	cin >> arsmodell;
	
	forsekring = artal - arsmodell;
	
	if(forsekring >= 5 && forsekring < 25) {
		cout << "Skaffa halvf�rs�kring";
	} else if(forsekring >= 25) {
		cout << "Skaffa veteranbilsf�rs�kring";
	} else {
		cout << "Skaffa helf�rs�kring";
	}
	
	return 0;
}
