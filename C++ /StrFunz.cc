using namespace std;
#include <iostream>
#include <cstring>

int main()
{
	char par1[100];
	char par2[100];
	bool trovato = false;
	
	cout << "parola 1" << endl;
	cin >> par1;
	
	cout << "parola 2" << endl;
	cin >> par2;

	
	cout << strcmp(par1,par2) << endl;
	
	return 0;
}

