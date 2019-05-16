#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	string mening;
	int tal, tal2, tal3;
	char check = 'm', check2 = 'a', check3 = 't';
	
	tal = 0;
	tal2 = 0;
	
	cout << "Skriv en mening" << endl;
	getline(cin, mening);
	
	int stop = 0;
	while (mening[stop] != '\0')
	{
      stop++;
	}
	
	for(int i = 0; i < stop; i++)
	{
		if(mening[i] == check)
		{
			tal = true;
		}
		if(mening[i] == check2 and tal == true)
		{
			tal2 = true;
		}
		if(mening[i] == check3 and tal2 == true)
		{
			tal3 = true;
		}
	}   
    
    if(tal == true && tal2 == true && tal3 == true) {
    	cout << "MAT!";
	} else {
	    cout << "Ingen mat...";
	}
	return 0;                                
}
