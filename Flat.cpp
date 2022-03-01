#include "flat.h"
#include <iostream>
using namespace std;

void program_1(Flat aflat[], string find_by_district, int N)
{
	int k = 0;
	bool found = false;
	for (int i = 0; i < N; i++)
	{
		if (aflat[i].get_district() == find_by_district)
		{
			found = true;
			k = aflat[i].get_total() + k;
		}
	}
	cout << "The total area of apartments in the given area: \n" << k << endl;
	if (!found)
		cout << "There are no apartments in the given area!\n" << endl;
}

void program_2(Flat aflat[], int N)
{
	bool found = false;
	for (int i = 0; i < N; i++)
	{
		if ((aflat[i].get_floor() == aflat[i].get_storeys()) && (aflat[i].get_floor() >= 5))
		{
			found = true;
			cout << "\nNumber of rooms: " << aflat[i].get_rooms() << endl;
			cout << "Total area: " << aflat[i].get_total() << endl;
			cout << "Living area: " << aflat[i].get_living() << endl;
			cout << "Number of balconies/loggia: " << aflat[i].get_balconies() << endl;
			cout << "Floor: " << aflat[i].get_floor() << endl;
			cout << "Floor of the house: " << aflat[i].get_storeys() << endl;
			cout << "Area: " << aflat[i].get_district() << endl;
			cout << "-----------------------------------------------------------------------\n" << endl;
		}
	}
	if (!found)
		cout << "The apartment, located on the top floor of a multi-storey building was NOT found!\n" << endl;
}

void menu()
{
	cout << "\n-----------------------------------------------------------------------" << endl;
	cout << "\nTasks: \n" << endl;
	cout << "\n1 - Calculate the total area of apartments, located in the specified" << endl;
	cout << "\n   district (the name of the district is entered from the keyboard).\n" << endl;
	cout << "\n2 - Display data about all apartments, located on the last floor" << endl;
	cout << "\n   of multi-storey building (5 and more floors).\n" << endl;
	cout << "\nTo finish the program enter: -1" << endl;
	cout << "\nTo repeat the menu call, enter: 0" << endl;
	cout << "\n-----------------------------------------------------------------------" << endl;
}

string Flat::get_district()
        {
        return district;
        }
int Flat::get_rooms()
        {
        return rooms;
        }
int Flat::get_total()
        {
        return total;
        }
int Flat::get_living()
        {
        return living;
        }
int Flat::get_balconies()
        {
        return balconies;
        }
int Flat::get_floor()
        {
        return floor;
        }
int Flat::get_storeys()
        {
        return storeys;
        }

void Flat::read_from(ifstream& file)
{
	file >> rooms;
	file >> total;
	file >> living;
	file >> balconies;
	file >> floor;
	file >> storeys;
	getline(file, district);
	file.get();
}

void Flat::display(int i)
{
	cout << "Enter data for apartments of multi-storey building #" << i + 1 << endl;
	cout << " Number of rooms - " << rooms << endl;
	cout << " Total area - " << total << endl;
	cout << " Living area - " << living << endl;
	cout << " Number of balconies - " << balconies << endl;
	cout << " Floor - " << floor << endl;
	cout << " Floor of the house - " << storeys << endl;
	cout << " District - " << district << endl;
	cout << "\n";
}

