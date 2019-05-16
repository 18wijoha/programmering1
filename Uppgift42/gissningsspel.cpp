#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    int tal1, gissning;
    int rand();
    
    srand(time(NULL));

    tal1 = rand() % 100 + 1;
    
    cout << "Gissa Talet" << endl;
    
    int again = true;
    int lose = 0;
    
    while(again = true) {
    	
    	cin >> gissning;
    	
    	if(lose >= 4) {
    		again = false;
    		cout << "YOU LOSE";
    		return 0;
		}
    	
        if(gissning == tal1) {
        	cout << "YOU WIN" << endl;
         	again = false;
    	} else if(gissning > tal1) {
    		cout << "För högt" << endl << "Gissa Igen" << endl;
    		again = true;
    		lose++;
    	} else if(gissning < tal1) {
     		cout << "För lågt" << endl << "Gissa Igen" << endl;
    		again = true;
    		lose++;
    	} 
    }

    return 0;
}
