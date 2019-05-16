#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

string ord, ord2, ABBA;

int nyttOrd() {
	ABBA = ord + ord2 + ord2 + ord;
}
int main(int argc, char** argv) {
	
	cout << "Skriv två ord" << endl;
	cin >> ord;
	cin >> ord2;
	
	nyttOrd();
	
	cout << ABBA;
	
	return 0;
}
