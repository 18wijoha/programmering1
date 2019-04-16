#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int underscore, stars, rader, nextunder;
	
	cout << "Säg ett nummer över 1" << endl;
	cin >> underscore;
	
	while(underscore < 1) {
		cout << "Mellan 1-10!" << endl;
		cin >> underscore;
	}
	
	cout << "Hur många sjärnor per rad ska det vara?" << endl;
	cin >> stars;
	
	cout << "Hur många rader ska det vara?" << endl;
	cin >> rader;
	
	for(int i = 0; i < rader; i++) {
		for(int j = 0; j < stars; j++) {
			if(j == underscore - 1) {
				cout << "_";
			} else {
				cout << "*";
			}
		}
		nextunder = underscore;
		cout << endl;
		
		if(nextunder == underscore) {
			underscore++;
		}
		
		if(underscore > stars) {
			underscore = 1;
		}
	}
	
	return 0;
}
