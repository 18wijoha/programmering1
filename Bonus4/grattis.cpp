#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float tal1, tal2, summa;
	
	cout << "Skriv ett tal" << endl;
	cin >> tal1;
	
	cout << "Skriv ett till tall" << endl;
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	if(tal1 == tal2) {
		cout << "Grattis!";
	} else if(summa >= -10 && summa <= 10) {
		cout << "Close but no cigar!";
	} else {
		cout << "Not even close.";
	}
	
	return 0;
}
