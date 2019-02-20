#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float A, B;
	
	cout << "Första heltalsvärdet" << endl;
	cin >> A;
	cout << "Andra heltalsvärdet" << endl;
	cin >> B;
	
	B = A + B;
	
	cout << "Tredje heltalsvärdet" << endl;
	cin >> A;
	
	B = A + B;
	
	cout << "Fjärde heltalsvärdet" << endl;
	cin >> A;
	
	B = A + B;
	
	cout << "Femte heltalsvärdet" << endl;
	cin >> A;
	
	B = A + B;
	
	A = B / 5;
	
	cout << "Medelvärdet: " << A;
		
	return 0;
}
