#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	string mening;
	int tal, tal2, tal3;
	
	tal = 0;
	tal2 = 0;
	tal3 = 0;
	
	cout << "Skriv en mening" << endl;
	getline(cin, mening);
	
	for(int i = 0; i < mening.length(); i++) {
		if(mening[i] == 'm') {
			tal++;
		}
		if(mening[i] == 'a') {
			tal2++;
		} 
		if(mening[i] == 't') {
			tal3++;
		}
    }    
    
    if(tal >= 1 && tal2 >= 1 && tal3 >= 1) {
    	cout << "MAT!";
	} else {
	    cout << "Ingen mat...";
	}
	return 0;                                
}
