#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int tal[10];

	for(int i = 10; i > 0; i--) {
		tal[i] = i;
		cout << tal[i] << endl;
		
	}
	return 0;
}
