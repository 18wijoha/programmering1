#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int tal1, heltal1, heltal2;
int rand();
    
    
randNum() {
	srand(time(NULL));

    tal1 = rand()%(heltal2-heltal1 + 1) + heltal1;
}

int main(int argc, char** argv) {

    cout << "Lägsta möjliga heltal" << endl;
    cin >> heltal1;
    
    cout << "Högsta möjliga heltal" << endl;
    cin >> heltal2;
    
    randNum();
    
    cout << tal1 << endl;

    return 0;
}
