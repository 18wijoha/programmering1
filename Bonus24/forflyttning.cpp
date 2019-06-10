#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int tal3, tal4, tal5, tal6, restart;

struct BOLL {
	int xposition;
	int yposition;
};

struct BOLL boll1;


funktion2(int tal7, int tal8) {
	
	
	for(int j = 0; j < 12; j++) {
		cout << "-";
		
		if(j == tal7) {
			tal5 = j;
		}
	}
	
	for(int i = 0; i < 11; i++) {
		cout << endl << "|";
		
		if(i == tal8) {
			tal6 = i;
			for(int k = 0; k <= tal5 + 1; k++) {
				if(k == tal5) {
					cout << "0";
				} else {
					cout << " ";
				}
			}
		}
	}
	
	cout << endl;
	
	for(int l = 0; l < 12; l++) {
		cout << "-";
	}
}
	
funktion1(int tal1, int tal2) {
	cout << "Ange x respektive y position" << endl;
	cin >> tal1;
	cin >> tal2;
	
	while(tal1 > 10 || tal1 < 0 || tal2 > 10 || tal2 < 0) {
		cout << "Mellan 0-10" << endl;
		cin >> tal1;
	    cin >> tal2;
	}
	
	tal3 = tal1;
	tal4 = tal2;
	
	boll1.xposition = tal3;
	boll1.yposition = tal4;
	
	funktion2(boll1.xposition, boll1.yposition);
	
	cout << endl;
	
	cout << boll1.xposition << " och " << boll1.yposition << endl;
	
	cout << "1 för restart, 2 för inte" << endl;
	cin >> restart;
	if(restart == 1) {
		system("cls");
		funktion1(boll1.xposition, boll1.yposition);
	} else {
		return 0;
	}
}
	
int main(int argc, char** argv) {
	
	struct BOLL boll1;
	
	boll1.xposition = 5;
	boll1.yposition = 5;
	
	funktion1(boll1.xposition, boll1.yposition);		
	
	return 0;
}
