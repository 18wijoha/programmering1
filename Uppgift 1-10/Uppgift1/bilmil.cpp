#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int tal1,tal2,summa, totmil;
	
	cout << "F�rsta m�tarst�llning" << endl;
	cin >> tal1;
	cout << "Andra m�tarst�llning" << endl;
	cin >> tal2;
	
	totmil = tal1 - tal2;
	
	cout << "Total Mil: " << totmil << endl;
	
	return 0;
}
