using namespace std;
#include <iostream>

// Dichiarare qui sotto la funzione reverse
long int reverse(long int *sequenza, int dim);

int main () {
	long sequence[30];
	int dim;
	
	cout << "Dimensione: ";
	cin >> dim;
	cout << "Array: ";
	for (int i = 0; i < dim; i++) {
		cin >> sequence[i];      
	}
	
	reverse(sequence, dim);
	
	cout << "Array invertito: ";
	for (int i = 0; i < dim; i++) {
		cout << sequence[i] << " ";      
	}
	cout << endl;
	
	return 0;
}


// Definire qui sotto la funzione reverse


long int reverse(long int* sequenza, int dim)
{
	long tmp;
	
	dim = dim-1;
	
	if(sequenza > sequenza+dim)
		return 0;
	else
	{
		
		if(*sequenza != *(sequenza + dim))
		{
			tmp = *sequenza;
			*sequenza = *(sequenza + dim);
			*(sequenza + dim) = tmp;
			reverse((sequenza+1), dim-1);
			
		}
	}
	
	return *sequenza;
	
	
}
