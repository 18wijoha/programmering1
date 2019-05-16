#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

string sida;
float katet, katet2, hypotenusan, svar;

int pythagoras() {
	if(sida == "kateten") {
		katet = hypotenusan*hypotenusan - katet2*katet2;
		svar = sqrt(katet);
		cout << svar;
	} else if(sida == "hypotenusan") {
		hypotenusan = katet*katet + katet2*katet2;
		svar = sqrt(hypotenusan);
		cout << svar;
	}
}

int main(int argc, char** argv) {
	
	cout << "Vill du hitta kateten eller hypotenusan?" << endl;
	cin >> sida;
	
	
	if(sida == "kateten") {
		cout << "Säg den andra katetens längd" << endl;
		cin >> katet2;
		cout << "Säg hypotenusans längd" << endl;
		cin >> hypotenusan;
	} else if(sida == "hypotenusan") {
		cout << "Säg en katets längd" << endl;
		cin >> katet;
		cout << "Säg andra katetens längd" << endl;
		cin >> katet2;
	}
	
	pythagoras();
	
	return 0;
}
