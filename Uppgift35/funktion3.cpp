#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int heltal, heltal2, svar;

int increaseFunction(int tal, int tal2) {
	
	svar = tal + tal2;
}
	
int main(int argc, char** argv) {
	
	cout << "Skriv tv� heltal" << endl;
	cin >> heltal;
	cin >> heltal2;
	
	increaseFunction(heltal,heltal2);
	
	cout << svar;
	return 0;
}
