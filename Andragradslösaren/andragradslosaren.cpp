#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float a, b, c, q, p, z1, z2, x1, x2, x, y;
	
	cout << "Skriv in variablerna" << endl;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	
	cout << endl;
	cout << "Ekvationen är då:" << endl;
	cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
	
	p = b/a;
	q = c/a;
	
	cout << endl;
	cout << "Hitta x skärningspunkten:" << endl;
	cout << "x = -(" << p << "/2)" << "+-sqrt((" << p << "/2)^2 - " << q << endl;
	
	if((p/2)*(p/2) - q < 0) {
		cout << "Ingen reell lösning." << endl;
		cout << endl;
		
		z1 = p/-2;
	    z2 = sqrt(((p/2)*(p/2) - q)/-1);
	    cout << "Andragradsekvationen " << a << "x^2 + " << b << "x + " << c << " = 0 har inga reella lösningar utan endast de komplexa rötterna " << z1 << " +- " << z2 << "i" << endl;	
	    
	    x1 = z1 - z2;
	x2 = z1 + z2;
	
	cout << endl;
	cout << "x1 = " << x1 << " och x2 = " << x2 << endl;
	x = (x1+x2)/2;
	
	cout << endl;
	cout << "Hitta y på extrempunkten: " << endl;
	cout << "y = " << a << "*(" << x << "*" << x << ") + " << b << "*" << x << " + " << x << endl;
	y = a*(x*x) + b*x + x;
	
	cout << endl;
	
	if(a < 0) {
	    cout << "Andragradsfunktionen f(x) = " << a << "x^2 + " << b << "x + " << c << " har symmetrilinjen x = " << x << " och extrempunkten (" << x << "," << y << ") som en maximipunkt.";
    } else if(a > 0) {
	    cout << "Andragradsfunktionen f(x) = " << a << "x^2 + " << b << "x + " << c << " har symmetrilinjen x = " << x << " och extrempunkten (" << x << "," << y << ") som en minimipunkt.";
    }

	    return 0;
	
	} else if((p/2)*(p/2) - q > 0) {
		cout << "Två reella lösningar." << endl;
	} else {
		cout << "En reell lösning." << endl;
		cout << endl;
	}
	
	z1 = p/-2;
	
	z2 = sqrt((p/2)*(p/2) - q);
	
	x1 = z1 - z2;
	x2 = z1 + z2;
	
	cout << endl;
	cout << "x1 = " << x1 << " och x2 = " << x2 << endl;
	x = (x1+x2)/2;
	
	cout << endl;
	cout << "Hitta y på extrempunkten: " << endl;
	cout << "y = " << a << "*(" << x << "*" << x << ") + " << b << "*" << x << " + " << x << endl;
	y = a*(x*x) + b*x + x;
	
	cout << endl;
	
	if(a < 0) {
	    cout << "Andragradsfunktionen f(x) = " << a << "x^2 + " << b << "x + " << c << " har symmetrilinjen x = " << x << " och extrempunkten (" << x << "," << y << ") som en maximipunkt.";
    } else if(a > 0) {
	    cout << "Andragradsfunktionen f(x) = " << a << "x^2 + " << b << "x + " << c << " har symmetrilinjen x = " << x << " och extrempunkten (" << x << "," << y << ") som en minimipunkt.";
    }

	
	return 0;
}
