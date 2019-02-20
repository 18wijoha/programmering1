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
	
	if(forsekring >= 5) {
		cout << "Skaffa halvförsäkring";
	} else {
		cout << "Skaffa helförsäkring";
	}
	return 0;
}
