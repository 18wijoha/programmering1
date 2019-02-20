#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int artal, arsmodell, forsekring;
	
	cout << "Aktuellt Årtal" << endl;
	cin >> artal;
	
	cout << "Bilens Årsmodell" << endl;
	cin >> arsmodell;
	
	forsekring = artal - arsmodell;
	
	if(forsekring >= 5 && forsekring < 25) {
		cout << "Skaffa halvförsäkring";
	} else if(forsekring >= 25) {
		cout << "Skaffa veteranbilsförsäkring";
	} else {
		cout << "Skaffa helförsäkring";
	}
	
	return 0;
}
