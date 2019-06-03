#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2, tal[5], restart;
	string jaellernej, dice;
	
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
   		cout << "Välj tärningar: 12345" << endl;
     	cin >> dice;
     	
     	for(int i = 0; i < 5; i++) {
			if(dice[i] == '1') {
				tal[0] = rand()%(tal2-tal1 + 1) + tal1;
			}
			if(dice[i] == '2') {
				tal[1] = rand()%(tal2-tal1 + 1) + tal1;
			}
			if(dice[i] == '3') {
				tal[2] = rand()%(tal2-tal1 + 1) + tal1;
			}
			if(dice[i] == '4') {
				tal[3] = rand()%(tal2-tal1 + 1) + tal1;
			}
			if(dice[i] == '5') {
				tal[4] = rand()%(tal2-tal1 + 1) + tal1;
			}
		}
		
    	cout << endl;
    	
	    for(int i = 0; i < 6; i++) { 
        	cout << tal[i] << endl;
    	}
    	
    }  else {
    	cout << "Bye Bye" << endl;
	}

		
	return 0;
}
