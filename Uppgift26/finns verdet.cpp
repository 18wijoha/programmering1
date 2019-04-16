#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	bool restart = true;
	
	while(restart == true) {
	    int tal[5], gissning;
	
	    tal[0] = 5;
    	tal[1] = 9;
    	tal[2] = 2;
    	tal[3] = 15;
    	tal[4] = 22;
	
    	cout << "Gissa ett heltal" << endl;
    	cin >> gissning;
	
    	for(int i = 0; i < 5; i++) {
    		if(tal[i] == gissning) {
     			cout << "Grattis";
     			restart = false;
    		}
    	}
    }
	return 0;
}
