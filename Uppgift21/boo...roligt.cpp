#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	bool increase = true;
	
	int tal = 0;
	cout << tal << " ";
	
	while(tal <= 7 || tal >= 0) {
		
		tal++;
		cout << tal << " ";
		
		if(tal == 7) {
			increase = false;
		}
		
		while(increase == false) {
			tal--;
			cout << tal << " ";
			if(tal < 1) {
				return 0;
			}
		}
	}
	
	return 0;
}
