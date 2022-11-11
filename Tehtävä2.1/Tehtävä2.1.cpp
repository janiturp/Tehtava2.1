#include <iostream>
using namespace std;

int* varaa_taulukko(int n)
{

	int* taulukko = new int[n];

	// Jotain säätöä omaan testailuun, jota en ees kunnolla käyttänyt. Saa ignorata.
	for (int i = 0; i < n; i++)
	{
		taulukko[i] = i + 1;
	}

	int* ekaOsoitin = &taulukko[0];
	return ekaOsoitin;
	delete[] taulukko;
}

int main()
{
	varaa_taulukko(5);
	

	return 0;
}
