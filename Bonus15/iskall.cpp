#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float temperatur, fahrenheit, celsius;

int ctillf = false, ftillc = false;

string val;

calculator(float tal, float tal2) {
	fahrenheit = temperatur * tal + tal2;
	cout << fahrenheit;
}

calculator2(float tal3, float tal4) {
	
	celsius = (temperatur - tal3) / tal4;
	
	cout << celsius;
}

formelVal() {
	if(ctillf == true) {
    	calculator(1.8, 32);
    } else if(ftillc == true) {
    	calculator2(32, 0.55);
	}
}

int main(int argc, char** argv) {
	
	cout << "Säg temperatur" << endl;
	cin >> temperatur;
	
	cout << "Välj Från C till F eller F till C" << endl;
	
	while(ctillf == false && ftillc == false) {
    
    	getline(cin, val);
	
    	if(val == "C till F") {
    		ctillf = true;
       	} else if(val == "F till C") {
    		ftillc = true;
    	}
    } 
    
	formelVal();
	
	return 0;
}
