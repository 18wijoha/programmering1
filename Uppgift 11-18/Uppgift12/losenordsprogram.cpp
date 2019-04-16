#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int tal, pinkod, forsok;
	
	cout << "Skriv in pinkod" << endl;
	cin >> tal;
	
	pinkod = 4242;
	forsok = 0;
	
	while(tal != pinkod && forsok < 2) {
		forsok++;
		cout << "Försök Igen" << endl;
		cin >> tal;
		cout << forsok << endl;
	}
	
	if(tal == pinkod) {
	    	cout << "Grattis, du kan nu ta ut pengarna!";
	}else if(forsok < 2){
	    cout << "Ditt kort är nu spärrat!";
	}
	return 0;
}
