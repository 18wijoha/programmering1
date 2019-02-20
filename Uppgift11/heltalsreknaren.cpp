#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int tal, tal2;
	
	cin >> tal;
	
	tal2 = tal - 1;
	
	for(int i = tal2; i > 0; i--) {
		cout << i << endl;
	}
	
	return 0;
}
