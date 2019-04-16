#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int underscore;
	
	cout << "Säg ett nummer mellan 1-10" << endl;
	cin >> underscore;
	
	while(underscore < 1 || underscore > 10) {
		cout << "Mellan 1-10!" << endl;
		cin >> underscore;
	}
	
	for(int i = 0; i < 6; i++) {
		
		if(underscore == 1) {
			cout << "_*********" << endl;
		}
		if(underscore == 2) {
			cout << "*_********" << endl;
		}
		if(underscore == 3) {
			cout << "**_*******" << endl;
		}
		if(underscore == 4) {
			cout << "***_******" << endl;
		}
		if(underscore == 5) {
			cout << "****_*****" << endl;
		}
		if(underscore == 6) {
			cout << "*****_****" << endl;
		}
		if(underscore == 7) {
			cout << "******_***" << endl;
		}
		if(underscore == 8) {
			cout << "*******_**" << endl;
		}
		if(underscore == 9) {
			cout << "********_*" << endl;
		}
		if(underscore == 10) {
			cout << "*********_" << endl;
		}
		
		underscore++;
		
		if(underscore > 10) {
			underscore = 1;
		}		
	}
	
	
	return 0;
}
