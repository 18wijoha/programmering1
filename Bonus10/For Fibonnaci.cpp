#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int tal1, tal2, tal3;
	
	tal1 = 0;
	tal2 = 1;
	tal3 = 0;
	
	cout << tal1 << endl;
	cout << tal2 << endl;
	
	for(int i = 0; i < 20; i++) {
		tal3 = tal1 + tal2;
		cout << tal3 << endl;
		tal1 = tal3;
		tal2 = tal2 + tal1;
		cout << tal2 << endl;
	}
	return 0;
}
