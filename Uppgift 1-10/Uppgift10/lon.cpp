#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int arbetstid, overtid, summa;
	
	cout << "Skriv ner din arbetstid" << endl;
	cin >> arbetstid;
	
	if(arbetstid > 160) {
		summa = 160 * 100;
		overtid = arbetstid - 160;
		if(overtid > 80) {
			overtid = 80;
		}
		summa = summa + (overtid * 150);
	} else {
		summa = arbetstid * 100;
	}
	
	cout << "Du känar " << summa;
	
	return 0;
}
