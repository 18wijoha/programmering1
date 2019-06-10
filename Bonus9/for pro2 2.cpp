#include <iostream>
using namespace std ;
 
int main() {
    int tal, spaces, tal2;
 
    for(int i = 1; i <= 9; i++) {
        
		if(i <= 9) {
			tal = i;
		} else {
			tal = 18 - i;
		}
        
		spaces = 18 - tal;
        
		for(int i = 1; i <= spaces; i++) {
			cout << " ";
		}
		
		for(int i = 1; i < tal; i++) {
			cout << i;
		}
        
		for(int i = tal; i >= 1; i--) {
			cout << i;
		}
        
		cout << endl;
	
	}
	
	for(int i = 7; i >= 0; i--) {
	
		for(int j = 10 - tal2; j - tal2 <= 10; j++) {
			j = j + 1;
			cout << " ";
		}
	
		cout << "       1";
		
		for(int j = 1; j < i + 1; j++) {
			cout << j + 1;
		}
		
		cout << endl;
		
		tal2 = tal2 + 1;
	}
	  
	return 0;
}
