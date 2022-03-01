#include "tasks.h"
#include "Flat.h"
#include <iostream> 
using namespace std;

void program_1(Flat aflat[], string find_by_district, int N)
{
	int k = 0;
	bool found = false;
	for (int i = 0; i < N; i++)
	{
		if (aflat[i].get_district == find_by_district)
		{
			found = true;
			k = aflat[i].total + k;
		}
	}
	cout << "The total area of apartments in the given area: \n" << k << endl;
	if (!found)
		cout << "There are no apartments in the given area!\n" << endl;
	system("pause");
}

void program_2(Flat aflat[], int N)
{
	bool found = false;
	for (int i = 0; i < N; i++)
	{
		if ((aflat[i].floor == aflat[i].storeys) && (aflat[i].floor >= 5))
		{
			found = true;
			cout << "\nNumber of rooms: " << aflat[i].rooms << endl;
			cout << "Total area: " << aflat[i].total << endl;
			cout << "Living area: " << aflat[i].living << endl;
			cout << "Number of balconies/loggia: " << aflat[i].balconies << endl;
			cout << "Floor: " << aflat[i].floor << endl;
			cout << "Floor of the house: " << aflat[i].storeys << endl;
			cout << "Area: " << aflat[i].district << endl;
			cout << "-----------------------------------------------------------------------\n" << endl;
		}
	}
	if (!found)
		cout << "The apartment, located on the top floor of a multi-storey building was NOT found!\n" << endl;
	system("pause");
}