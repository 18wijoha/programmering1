#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2, tal;
	
	tal1 = 1;
	tal2 = 6;
	
	srand(time(NULL));
	
	for(int i = 0; i < 6; i++) { 
		tal = rand()%(tal2-tal1 + 1) + tal1;
		cout << tal << endl;
	}

	return 0;
}
