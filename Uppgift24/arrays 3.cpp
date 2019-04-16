#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int tal[10];
	
	cout << "Skriv 10 heltal" << endl;
	cin >> tal[0];
	cin >> tal[1];
	cin >> tal[2];
	cin >> tal[3];
	cin >> tal[4];
	cin >> tal[5];
	cin >> tal[6];
	cin >> tal[7];
	cin >> tal[8];
	cin >> tal[9];
	
	cout << "Utskriften" << endl;
	
	for(int i = 9; i > -1; i--) {
		cout << tal[i] << endl;
	}
	return 0;
}
