#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int A, B, C;
	
	cout << "F�rsta heltalet" << endl;
	cin >> A;
	cout << "Andra heltalet" << endl;
	cin >> B;
	cout << "Tredje heltalet" << endl;
	cin >> C;
	
	if(A >= B && A >= C) {
		cout << "St�rsta heltalet: " << A;
	} else if( B >= C && B >= A) {
		cout << "St�rsta heltalet: " << B;
	} else {
		cout << "St�rsta heltalet: " << C;
	}
	
	return 0;
}
