#include <iostream>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <conio.h>

using namespace std;

const int SIZE = 100;

int main()
{
	
	int* p;

	
	int max=0 ;
	int inputVal;
	p = new int[SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		p[i] = 0;
	}

	cout << "Enter grades of the student (-1 to QUIT) \n";

	do
	{
		
		cin >> inputVal;

		
		if(inputVal > max)
			
			max = inputVal;

		if(inputVal >=0)
			
			p[inputVal]++;
	}while (inputVal != -1);

	
	for(int j = 0; j <= max; j++)
		if (p[j]>0){
		cout << "Number of " << j << "'s: " << p[j] << endl;
		}



		system("pause");
}