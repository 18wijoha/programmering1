#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    int tal1, tal2, gissning, restart = true;
    int rand();
    
    string jaellernej;
    
    
    
while(restart == true) {
    	
    int again = true;
    int lose = 0;
    	
    srand(time(NULL));

    tal1 = rand() % 100 + 1;
    
    cout << "Gissa Talet" << endl;
    
    while(again == true) {
    	
    	// AI random number
        tal2 = rand() % 100 + 1;
    
    	cin >> gissning;
    	
        if(gissning == tal1) {
        	cout << "YOU WIN" << endl;
         	again = false;
         	
    	} else if(gissning > tal1) {
    		cout << "För högt" << endl;
    		again = true;
    		lose++;
    		
    	} else if(gissning < tal1) {
     		cout << "För lågt" << endl;
    		again = true;
    		lose++;
    	}
    	
    	if(tal2 < tal1 && again == true) {
    		cout << "AI gissade på " << tal2 << ". För lågt." << endl;
		}
		
		if(tal2 > tal1 && again == true) {
    		cout << "AI gissade på " << tal2 << ". För högt." << endl;
		}
		
		if(tal2 == tal1 && again == true) {
    		cout << "AI gissade på " << tal2 << ". AI VANN!" << endl;
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
		
		if(gissning == tal1) {
         	
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
