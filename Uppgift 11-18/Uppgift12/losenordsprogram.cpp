   #include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int losenord, gissning;
	
	losenord = 4343;
	
	cout << "Gissa l�senordet: " << endl;
	cin >> gissning;
	
	if(gissning == losenord) {
		cout << "Grattis! Du f�r nu ta ut pengar.";
	} else {
		cout << "F�rs�k igen.";
	}
	return 0;
}
