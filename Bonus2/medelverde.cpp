#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float A, B;
	
	cout << "F�rsta heltalsv�rdet" << endl;
	cin >> A;
	cout << "Andra heltalsv�rdet" << endl;
	cin >> B;
	
	B = A + B;
	
	cout << "Tredje heltalsv�rdet" << endl;
	cin >> A;
	
	B = A + B;
	
	cout << "Fj�rde heltalsv�rdet" << endl;
	cin >> A;
	
	B = A + B;
	
	cout << "Femte heltalsv�rdet" << endl;
	cin >> A;
	
	B = A + B;
	
	A = B / 5;
	
	cout << "Medelv�rdet: " << A;
		
	return 0;
}
