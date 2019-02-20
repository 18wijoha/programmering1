#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int A, B;
	
	cout << "Skriv in ett heltal" << endl;
	cin >> A;
	
	if(A >= 45 && A <= 63) {
		cout << "GRATTIS DU VANN! BRA JOBBAT!" << endl;
	} else {
		cout << "GAME OVER!" << endl;
	}
	
	cout << "Skriv in ett till heltal" << endl;
	cin >> B;
	
	if(B >= 45 && B <= 63) {
		cout << "GRATTIS DU VANN! BRA JOBBAT!";
	} else {
		cout << "GAME OVER!";
	}
	
	return 0;
}
