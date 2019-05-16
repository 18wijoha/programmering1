#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    int tal1, gissning, restart = true;
    int rand();
    
    string jaellernej;
    
    while(restart == true) {
    	
    int again = true;
    int lose = 0;
    	
    srand(time(NULL));

    tal1 = rand() % 100 + 1;
    
    cout << "Gissa Talet" << endl;
    
    while(again == true) {
    	
    	cin >> gissning;
    	
        if(gissning == tal1) {
        	cout << "YOU WIN" << endl;
         	again = false;
         	
         	cout << "Vill du köra igen? Ja eller Nej." << endl;
         	cin >> jaellernej;
         	
         	if(jaellernej == "Ja") {
         		restart = true;
			} else {
				restart = false;
			}
    	} else if(gissning > tal1) {
    		cout << "För högt" << endl;
    		again = true;
    		lose++;
    	} else if(gissning < tal1) {
     		cout << "För lågt" << endl;
    		again = true;
    		lose++;
    	}
    	
    	if(lose >= 5) {
    		again = false;
    		cout << "YOU LOSE" << endl;
    		
    		cout << "Vill du köra igen? Ja eller Nej." << endl;
         	cin >> jaellernej;
         	
         	if(jaellernej == "Ja") {
         		restart = true;
			} else {
				restart = false;
			}
		}
    }
    
}
    return 0;
}
