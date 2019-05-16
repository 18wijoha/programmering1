#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

    float minuter1, minuter2, timmar1, timmar2, sekunder1, sekunder2, summas, summam, summat;

    cout << "Hur många timmar tog första loppet?" << endl;
    cin >> timmar1;
    cout << "Hur många minuter tog första loppet?" << endl;
    cin >> minuter1;
    cout << "Hur många sekunder tog första loppet?" << endl;
    cin >> sekunder1;
    cout << "Hur många timmar tog andra loppet?" << endl;
    cin >> timmar2;
    cout << "Hur många minuter tog andra loppet?" << endl;
    cin >> minuter2;
    cout << "Hur många sekunder tog andra loppet?" << endl;
    cin >> sekunder2;

    summas = sekunder1 + sekunder2;
    summam = minuter1 + minuter2;
    summat = timmar1 + timmar2;

    if(summas > 59) {
        summam = summam + 1;
        summas = summas - 60;
    }

    if(summam > 59) {
        summat = summat + 1;
        summam = summam - 60;
        }

    cout << "Timmar: " << summat << " Minuter: " << summam << " Sekunder: " << summas;

    return 0;
}
