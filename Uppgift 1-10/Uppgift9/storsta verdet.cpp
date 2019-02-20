#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int A, B, C;
	
	cout << "Första heltalet" << endl;
	cin >> A;
	cout << "Andra heltalet" << endl;
	cin >> B;
	cout << "Tredje heltalet" << endl;
	cin >> C;
	
	if(A >= B && A >= C) {
		cout << "Största heltalet: " << A;
	} else if( B >= C && B >= A) {
		cout << "Största heltalet: " << B;
	} else {
		cout << "Största heltalet: " << C;
	}
	
	return 0;
}
