#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int heltal, heltal2;

int increaseFunction() {
	
	heltal = heltal + heltal2;
}
	
int main(int argc, char** argv) {
	
	cout << "Skriv två heltal" << endl;
	cin >> heltal;
	cin >> heltal2;
	
	increaseFunction();
	
	cout << heltal;
	return 0;
}
