#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    int tal1, heltal1, heltal2;
    int rand();
    
    cout << "L�gsta m�jliga heltal" << endl;
    cin >> heltal1;
    
    cout << "H�gsta m�jliga heltal" << endl;
    cin >> heltal2;
    
    srand(time(NULL));

    tal1 = rand()%(heltal2-heltal1 + 1) + heltal1;
    
    cout << tal1 << endl;

    return 0;
}
