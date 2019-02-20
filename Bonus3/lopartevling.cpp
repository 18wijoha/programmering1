#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int lopp1, lopp2, summa;
	
	cout << "Skriv tiden på lopp 1 och lopp 2 i TTMMSS med mellanslag mellan varandra" << endl;
	cin >> lopp1;
	cin >> lopp2;
	
	summa = lopp1 + lopp2;
	
	cout << "Summan av loppen är: " << summa;
	return 0; 
}
