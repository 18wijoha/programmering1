#include <iostream>

using namespace std;

int main() {
	
int tal;
	
	for(int i = 9; i >= 0; i--) {
	
		for(int j = 10 - tal; j - tal <= 10; j++) {
			cout << " ";
		}
	
		cout << "0   ";
		
		
		for(int j = 1; j < i + 1; j++) {
			cout << j << "   ";
		}
		
		cout << endl;
		
		tal = tal + 1;
	}
	
	return 0; 
}
