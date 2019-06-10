#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2, tal[5], restart, dice;
	string jaellernej;
	
	tal1 = 1;
	tal2 = 6;
	
	srand(time(NULL));
	
	for(int i = 0; i < 6; i++) { 
		tal[i] = rand()%(tal2-tal1 + 1) + tal1;
		cout << tal[i] << endl;
	}
	
    cout << "Vill du köra igen? Ja eller Nej." << endl;
    cin >> jaellernej;
         	
    if(jaellernej == "Ja") {
       	restart = true;
    } else {
   		restart = false;
   	}
   	
   	if(restart == true) {
   		cout << "Välj tärning: 1 - 5" << endl;
     	cin >> dice;
	
    	tal[dice - 1] = rand()%(tal2-tal1 + 1) + tal1;
    	
    	cout << endl;
    	
	    for(int i = 0; i < 6; i++) { 
        	cout << tal[i] << endl;
    	}
    	
    }  else {
    	cout << "Bye Bye" << endl;
	}
	
	return 0;
}
