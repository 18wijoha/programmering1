#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int tal1, tal2, tal3, tal4, tal5, tal6;
	
	cout << "Skriv ett tal mellan 1-12" << endl;
	cin >> tal1;
	
	while(tal1 < 1 || tal1 > 12) {
		cout << "Försök igen." << endl;
		cin >> tal1;
	}
	
		for(int i = 0; i < 11; i++) {
			tal2 = tal1 * i;
			cout << tal1 << " * " << i << " = " << tal2 << endl;
		}

	return 0;
}
