#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {

	string substantiv, verb, adjektiv;
	
	cout << "Skriv ett Substantiv." << endl;
	cin >> substantiv;
	cout << "Skriv ett Adjektiv." << endl;
	cin >> adjektiv;
	cout << "Skriv ett Verb." << endl;
	cin >> verb;
	
	cout << "Hejsan " << substantiv << " , du är väldigt " << adjektiv << " när du " << verb << "." << endl;
	
	return 0;
}
