#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int tal2;

int whilemax(int tal) {
	cout << "Skriv ett heltal" << endl;
	cin >> tal2;
	
	while(tal2 > tal) {
		cout << "Försök igen." << endl;
		cin >> tal2;
	}
}

int main(int argc, char** argv) {
	
	whilemax(5);
	
	return 0;
}
