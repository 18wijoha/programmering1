#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int tal[7], tal2;
	
	cout << "Skriv 7 heltal" << endl;
	cin >> tal[0];
	cin >> tal[1];
	cin >> tal[2];
	cin >> tal[3];
	cin >> tal[4];
	cin >> tal[5];
	cin >> tal[6];
	
	tal2 = 0;
	
	for(int i = 0; i < 7; i++) {
		tal2 = tal[i] + tal2;
	}
	cout << "Summan är" << endl;
	cout << tal2 << endl;
	
	if(tal2 >= 50) {
		cout << "Summa är större än 50" << endl;
	} else {
		cout << "Summa är mindre än 50" << endl;
	}
	return 0;
}
