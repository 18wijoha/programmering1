#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int heltal;

int increaseFunction() {
	cout << "Skriv ett heltal" << endl;
	cin >> heltal;
	
	heltal = heltal + 2;
}
	
int main(int argc, char** argv) {
	
	increaseFunction();
	
	cout << heltal;
	return 0;
}
