using namespace std;
#include <iostream>
#include <cstring>
#include <fstream>

int main(int argc, char *argv[])
{

	int i = 0;
	char tmp[100];
	fstream in;
	char carattere;
	bool at=false;
	int parole = 0;
	int index = 0;

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
					
					if(carattere=='@'&& i>0)
					{
						if(at==true)
							i=strlen(tmp);
							else
							at=true;
					}
					
					if(carattere=='.' && at==true)
					{
						cout << tmp << endl;
						parole++;
					}
				
				}
			
			at=false;
		}
		
	cout << "Ci sono " << parole << " potenziali mail nel testo." << endl;
	}
	
	in.close();
	
	
	return 0;
}

