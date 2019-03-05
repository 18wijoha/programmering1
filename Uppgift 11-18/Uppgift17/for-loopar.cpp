#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {

	for(int i = 1; i < 11; i++) {
		
		cout << "Baa";
		
		for(int a = 2; a < i + 1; a++) {
			cout << ", Baa";
		}
		
		cout << endl;
	}
	return 0;
}
