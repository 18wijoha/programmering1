#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int heltal;

int increaseFunction() {
	heltal = heltal + 2;
	cout << heltal;
}
	
int main(int argc, char** argv) {
	
	cout << "Skriv ett heltal" << endl;
	cin >> heltal;
	
	increaseFunction();
	
	return 0;
}
