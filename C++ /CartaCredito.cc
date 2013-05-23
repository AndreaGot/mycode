using namespace std;
#include <iostream>
#include <cstring>

int main()
{
	char cod1[4];
	char cod2[4];
	char cod3[4];
	char cod4[4];
	bool trovato = false;
	
	cin >> cod1;
	cin >> cod2;
	cin >> cod3;
	cin >> cod4;
	
	for(int i=0; i<strlen(cod1); i++)
		if(!(cod1[i] >= '0' && cod1[i] <= '9' && cod2[i] >= '0' && cod2[i] <= '9' && cod3[i] >= '0' && cod3[i] <= '9' && cod4[i] >= '0' && cod4[i] <= '9'))
			trovato=true;
	
			
			if(trovato==true) 
				cout << "il codice inserito corrisponde a quello di una carta di credito" << endl;
				else 
				cout << "codice non valido" << endl;
				
				

	
	return 0;
}

