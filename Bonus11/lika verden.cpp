#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int heltal[5];
	bool is_same = false;
	
	cout << "Skriv 5 heltal" << endl;
	cin >> heltal[0];
	cin >> heltal[1];
	cin >> heltal[2];
	cin >> heltal[3];
	cin >> heltal[4];
	
	for(int i = 0; i < sizeof(heltal); i++) {
		if(heltal[0] == heltal[1,2,3,4]) {
			is_same = true;
		}
		if(heltal[1] == heltal[0,2,3,4]) {
			is_same = true;
		}
		if(heltal[2] == heltal[1,0,3,4]) {
			is_same = true;
		}
		if(heltal[3] == heltal[1,2,0,4]) {
			is_same = true;
		}
		if(heltal[4] == heltal[1,2,3,0]) {
			is_same = true;
		}
	}
	
	if(is_same == true) {
		cout << "Minst ett av heltalet blev skrivet två gånger" << endl;
	}
	
	return 0;
}
