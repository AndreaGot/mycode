#include "stack.h"
#include <iostream>

int main()
{
	int p;
	int indice=0;
	int tmp ;
	for(int i=0; i<5;i++)
	{
		cin >> tmp;
		push(tmp);
		indice++;
		
	}
	print();
	
	cout << endl;
	
	return 0;
}

