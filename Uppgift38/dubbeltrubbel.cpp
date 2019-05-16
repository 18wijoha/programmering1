#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int temperatur, fahrenheit;

calculator(float tal, float tal2) {
	fahrenheit = temperatur * tal + tal2;
}

temp() {
	cout << "Skriv in en temperatur i celsius" << endl;
	cin >> temperatur;
	
	calculator(1.8, 32);
	
	cout << fahrenheit;
}

int main(int argc, char** argv) {
	
	temp();
	
	return 0;
}
