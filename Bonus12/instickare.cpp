#include <iostream>

using namespace std;

int main() {
	int array[7], user, ny, position;
	
	cout << "Skriv in 7 heltal" << endl;
	
	for(int i = 0; i < 7; i++) {
		cin >> user;
		array[i] = user;
	}
	
	cout << "Skriv in ett till heltal" << endl;
	cin >> ny;
	
	cout << "Välj position mellan 0-6" << endl;
	cin >> position;
	
	while(position > 6 || position < 0) {
	cout << "Välj mellan 0-6";
	cin >> position;
	}

	for(int i = 6; i >= position; i--) {
		array[i] = array[i-1];
	}
	
	cout << endl;
	
	array[0] = ny;
	
	for(int i = 0; i < 7; i++) {
		cout << array[i] << endl;
	}
	
	return 0;
}
