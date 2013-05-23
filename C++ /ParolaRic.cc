using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	int contatore=0;
	int max=0;
	int salta;
	char parola[256];
	int i;
	
	if(argc!=2)
	{
	cout << "numero argomenti sbagliato";	
		exit(0);
	}
	
	fstream inp;
	fstream inp2;
	char tmp[256];
	char tmp2[256];
	
	inp.open(argv[1], ios::in);

	
	while(!(inp.eof()))
		  {
	
			  
				inp >> tmp;
			  
			  	inp2.open(argv[1], ios::in);
			  
			  while(!(inp2.eof()))
					{
						inp2 >> tmp2;
						
						if(strcmp(tmp,tmp2)==0)
							contatore++;
						
					
					}
					
			  inp2.close();
			  
					if(contatore>max)
					{
						max=contatore;
						strcpy(parola,tmp);
					}
					
					
					contatore = 0;
					salta++;
		  }
	inp.close();
	
	cout << "La parola più ricorrente compare " << max << " volte ed è " << parola << endl;
	
	
	
	
	
return 0;
}

