#include <iostream>
using namespace std ;
 
int main() {
    int tal, spaces;
 
    for(int i = 1; i <= 9; i++) {
        
		if (i <= 9) {
			tal = i;
		} else {
			tal = 18 - i;
		}
        
		spaces = 18 - tal;
        
		for (int i = 1; i <= spaces; i++) {
	    	cout << " ";
	    }
		for (int i = 1; i < tal; i++) {
			cout << i;
		}
        
		for (int i = tal; i >= 1; i--) {
			cout << i;
		}
        
		cout << endl;
		
    }
    
	return 0 ;
}
