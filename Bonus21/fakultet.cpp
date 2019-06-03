#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int sum, heltal;

summa(int tal) {
	if(tal == 1) {
	    sum = 1;
	} else {
		sum = tal * summa(tal-1);
	}
	return sum;
}

int main(int argc, char** argv) {
	
	cout << "Skriv in ett heltal" << endl;
	cin >> heltal;
	
	summa(heltal);
	cout << sum;
	
	return 0;
}
