#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float sum = 0.1, heltal, tal3 = 1;
bool svar = false;

summa(float tal, float tal2) {
	tal2 = tal2 - 1;
	cout << sum << endl;
		cout << tal << endl;
		cout << tal2 << endl;
		cout << tal3 << endl;
	if(floor(sum) == ceil(sum)) {
	    svar = true;
    } else if(tal2 <= 1) {
    	svar = false;
	} else {
		sum = tal/tal2;
		summa(tal, tal2);
	}
	return sum;
}

int main(int argc, char** argv) {
	
	cout << "Skriv in ett heltal" << endl;
	cin >> heltal;
	
	sammumma(heltal, heltal);
	
	if(svar == true) {
		cout << "Det är ett primtal";
	} else {
		cout << "Det är inte ett primtal";
	}
	
	return 0;
}
