using namespace std;
#include <iostream>

int Max(int *arr, int px);

int main()
{
	int massimo=0;
	int tmp;
	int i;
	
	int * array;
	int posti;
	
	cout << "Inserisci il numero di posti" << endl;
	cin >> posti;
	
    array = new int[posti-1];
	
	for(i=0; i<posti; i++)
	{
	    cin >> array[i];
	}
		
	massimo = Max(array,posti-1);
	
	cout << "il massimo è " << massimo << endl;
	
	return 0;
	
}



 int Max(int *arr,int px)
{
		
		int valmax;
		if(px==0)
			return arr[0];

		valmax=Max(arr, px-1);

		if(valmax>arr[0])
			return valmax;	
		else
			return arr[px];
		

	} 


   