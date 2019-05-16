#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    int tal1, tal2, gissning, restart = true, max, min;
    int rand();
    
    string jaellernej;
    
    
    
while(restart == true) {
    	
    int again = true;
    int lose = 0;
    max = 100;
    min = 0;
    	
    srand(time(NULL));

    tal1 = rand() % 100 + 1;
    
    cout << "Gissa Talet" << endl;
    
    while(again == true) {
    	
    	int low = false;
        int high = false;
    	
    	// AI random number
        tal2 = rand()%(max-min + 1) + min;
        
    	cin >> gissning;
    	
        if(gissning == tal1) {
        	cout << "YOU WIN" << endl;
         	again = false;
         	
    	} else if(gissning > tal1) {
    		cout << "För högt" << endl;
    		again = true;
    		lose++;
    		max = gissning - 1;
    		high = true;
    		
    	} else if(gissning < tal1) {
     		cout << "För lågt" << endl;
    		again = true;
    		lose++;
    		min = gissning + 1;
    		low = true;
    	}
    	
    	if(tal2 < tal1 && again == true) {
    		cout << "AI gissade på " << tal2 << ". För lågt." << endl;
    		
    		if(low == true && tal2 > gissning) {
    			min = gissning + 1;
			}
			low = false;
		}
		
		if(tal2 > tal1 && again == true) {
    		cout << "AI gissade på " << tal2 << ". För högt." << endl;
    		
    		if(high == true && tal2 < gissning) {
    			max = gissning - 1;
			}
			high = false;
		}
		
		if(tal2 == tal1 && again == true) {
    		cout << "AI gissade på " << tal2 << ". AI VANN!" << endl;
		}
    	
    	if(lose >= 5) {
    		again = false;
    		cout << "YOU LOSE" << endl;
    		
    		cout << "Svaret var: " << tal1 << endl;
    		cout << "Vill du köra igen? Ja eller Nej." << endl;
         	cin >> jaellernej;
         	
         	if(jaellernej == "Ja") {
         		restart = true;
			} else {
				restart = false;
			}
		}
		
		if(gissning == tal1) {
         	
         	cout << "Svaret var: " << tal1 << endl;
         	
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
