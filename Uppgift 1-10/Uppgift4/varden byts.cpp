#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int A, B, C;
	
	cout << "Variabel A" << endl;
	cin >> A;
	cout << "Variabel B" << endl;
	cin >> B;
	
	C = B;
	
	B = A;
	
	A = C;
	
	cout << "Variabel A: " << A << endl;
	cout << "Variabel B: " << B;
	
	return 0;
}
