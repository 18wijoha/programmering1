#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int sum, tal1 = 0, tal2 = 1;

summa(int tal3, int tal4) {
	if(tal4 >= 6765) {
	    sum = 4181;
	} else {
		cout << tal3 << endl;
		cout << tal4 << endl;
		tal3 = tal3 + tal4;
		tal4 = tal3 + tal4;
		summa(tal3,tal4);
	}
	return sum;
}

int main(int argc, char** argv) {
	
	cout << "Fibonacci Talen: " << endl;
	
	summa(tal1,tal2);
	
	return 0;
}
