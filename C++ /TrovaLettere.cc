using namespace std;
#include <iostream>
#include <cstring>
#include <fstream>

int main(int argc, char *argv[])
{

	int i;
	char tmp[100];
	fstream in;
	char parola[100];
	int lettere[25];
	char carattere;

if(argc != 2)
{
	cout << "Utilizzo errato. a.out <nomefilein>" << endl;
	}
	else {
		
		in.open(argv[1], ios::in);
		
		while(!in.eof())
		{
			
			in >> tmp;
			
			for(i=0; i<strlen(tmp);i++)
				{
					carattere = tmp[i];
					lettere[carattere-'a']++;
				}
		}
		
		for(i=0;i<26;i++)
		{
			carattere = i+'a';
			cout << "ci sono " << lettere[i]  << "   " << carattere << endl; 
		}
	}
	
	in.close();
	
	
	return 0;
}

