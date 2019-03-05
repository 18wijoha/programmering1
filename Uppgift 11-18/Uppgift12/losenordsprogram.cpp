   #include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int losenord, gissning;
	
	losenord = 4343;
	
	cout << "Gissa lösenordet: " << endl;
	cin >> gissning;
	
	if(gissning == losenord) {
		cout << "Grattis! Du får nu ta ut pengar.";
	} else {
		cout << "Försök igen.";
	}
	return 0;
}
