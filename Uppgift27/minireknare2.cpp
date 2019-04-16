#include <iostream>

using namespace std;

int main() {
    bool restartBool = true;

    while(restartBool = true) {
    string userInput, restart;
    float A, B;
    bool wrong = true;

    cout << "Skriv in Addition, Subtraktion, Multiplikation eller Division" << endl;
    cin >> userInput;

    cout << "Skriv in A och B" << endl;
    cin >> A;
    cin >> B;

    while(wrong == true) {
        if(userInput == "Addition") {
            cout << A + B << endl;
            wrong = false;
        } 

        else if(userInput == "Subtraktion") {
            cout << A - B << endl;
            wrong = false;
        } 

        else if(userInput == "Multiplikation") {
            cout << A * B << endl;
            wrong = false;
        } 

        else if(userInput == "Division") {
            cout << A / B << endl;
            wrong = false;
        }

        else {
            cout << "Skriv med stor bokstav i början!" << endl;
            cout << "Addition, Subtraktion, Multiplikation eller Division" << endl;
            wrong = true;
            cin >> userInput;
        }
    }

    cout << "Vill du kora igen?" << endl;
    cin >> restart;

    if(restart == "Ja") {
        restartBool = true;
    } 

    else if(restart == "Nej") {
        restartBool = false;
    }

    }
    return 0;
}
