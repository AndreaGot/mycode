using namespace std;
#include <iostream>

int main()
{

	char parola[30];
	int lung;
	
	
	cout << "Inserisci una parola: " << endl;
	cin >> parola;
	
lung = strlen(parola);
	
	if(lung==5)
		cout << "La parola è lunga 5 caratteri " << endl;
	else 
		cout << "La parola non ha esattamente 5 caratteri" << endl;



	
	
	return 0;
}

