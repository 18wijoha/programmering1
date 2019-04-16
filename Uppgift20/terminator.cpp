#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	bool run = true;
	int tal;
	
	while(run == true) {
		cout << "Vill du avsluta programmet? (1 för Ja eller 2 för Nej)" << endl;
		cin >> tal;
		
		if(tal == 1) {
		    run = false;
	    } else {
	    	run = true;
		}
	}
	return 0;
}
