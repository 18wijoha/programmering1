#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int tal, hopp, sluttal;
	
	cout << "Välj ett tal mellan 10-20" << endl;
	cin >> tal;
	
	while(!(tal >= 10 && tal <= 20)) {
    	cout << "Försök igen." << endl;
    	cin >> tal;
	}
    
	while(tal >= 10 && tal <= 20) {
		
		cout << "Välj hur stora hopp talen ska göra" << endl;
	    cin >> hopp;
	
	    cout << "Välj vilket tal det ska sluta på" << endl;
	    cin >> sluttal;
	    
	    cout << "Resultat: " << endl;
	
		for(int i = tal; i >= sluttal; i = i - hopp) {
		    cout << i << endl;
	    }
    } 
    
	return 0;
}
