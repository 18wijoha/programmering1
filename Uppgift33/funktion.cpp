#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int heltal;

int increaseFunction(int tal) {
	tal = tal + 2;
	cout << tal;
}
	
int main(int argc, char** argv) {
	
	cout << "Skriv ett heltal" << endl;
	cin >> heltal;
	
	increaseFunction(heltal);
	
	return 0;
}
