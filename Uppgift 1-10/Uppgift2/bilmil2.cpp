#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float tal1 , tal2, summa, totmil, bensin;
	
	cout << "F�rsta m�tarst�llning" << endl;
	cin >> tal1;
	cout << "Andra m�tarst�llning" << endl;
	cin >> tal2;
	
	totmil = tal1 - tal2;
	
	cout << "Total Mil: " << totmil << endl;
	
	cout << "Total Bensin Anv�ndning" << endl;
	cin >> bensin;
		
	summa = bensin / totmil;
	
	cout << "F�rbrukning Per Mil: " << summa;
	return 0;
}
