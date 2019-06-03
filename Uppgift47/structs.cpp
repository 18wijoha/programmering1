#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct BOLL {
	int radie;
	string ferg;
	int vikt;
};
	
int main(int argc, char** argv) {
	
	struct BOLL boll1;
	BOLL boll2;
	
	cout << "Bollens radie" << endl;
	cin >> boll1.radie;
	cout << "Bollens färg" << endl;
	cin >> boll1.ferg;
	cout << "Bollens vikt" << endl;
	cin >> boll1.vikt;
	cout << endl;
	
	boll2.radie = boll1.radie * 2;
	boll2.vikt = boll1.vikt * 8;
	
	cout << boll2.radie << endl;
	cout << boll1.ferg << endl;
	cout << boll2.vikt << endl;
	
	return 0;
}
