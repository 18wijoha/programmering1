#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float tal1 , tal2, summa, totmil, bensin;
	
	cout << "Första mätarställning" << endl;
	cin >> tal1;
	cout << "Andra mätarställning" << endl;
	cin >> tal2;
	
	totmil = tal1 - tal2;
	
	cout << "Total Mil: " << totmil << endl;
	
	cout << "Total Bensin Användning" << endl;
	cin >> bensin;
		
	summa = bensin / totmil;
	
	cout << "Förbrukning Per Mil: " << summa;
	return 0;
}
