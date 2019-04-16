#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	string ord;
	
	cin >> ord;
	
	for(int i = 0; i < ord.length(); i++) {
		if(ord[i] == 'Z') {
			ord[i] = 'a';
		}
	}
	
	cout << ord << endl;
	
	return 0;
}
