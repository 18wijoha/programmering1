#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	bool is_ten;
	int kontroll;
	
	cout << "Skriv in heltal: " << endl;
	cin >> kontroll;
	
	while(kontroll < 0) {
		cout << "Ett heltal." << endl;
		cin >> kontroll;
	}
	
	if(kontroll == 10) {
		is_ten = true;
	} else {
		is_ten = false;
	}
	
	if(is_ten == true) {
		cout << "Du skrev in 10";
	} else {
		cout << "Du skrev inte in 10";
	}
	
	return 0;
}
