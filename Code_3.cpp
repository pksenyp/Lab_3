#include <cstdlib>
#include <fstream>    // file streams
#include <cstring>    // C++ text strings
#include <iostream>   // streaming input/output from the console
#include <Windows.h>  // solving text encoding problems
#include "flat.h"
#include "flat.cpp"

using namespace std;

int main()
{
	int  n, N;
	string str;
	Flat* flat;
	ifstream infile;
        infile.open("file.txt");
        if (!infile.is_open())  {
                cout << "Data file not found!" << endl;
                system("pause");
                return 0;
        }
	infile >> N;
	infile.get();
	flat = new Flat[N];

	for (int i = 0; i < N; i++)
		flat[i].read_from(infile);

	infile.close();

	for (int i = 0; i < N; i++)
	{
	    flat[i].display(i);
	}

	menu();
	do
	{
		cout << "\n-----------------------------------------------------------------------" << endl;
		cout << "\nEnter task number: \n" << endl;
		cout << "-----------------------------------------------------------------------\n" << endl;
		cin >> n;
		cout << "-----------------------------------------------------------------------" << endl;
		switch (n)
		{
		case 0: menu();
			break;
		case 1:
			cout << "\nEnter district - ";
			cin.get();
			getline(cin, str);
			program_1(flat, str, N);
			break;
		case 2: program_2(flat, N);
			break;
		default:
			cout << "\nThere are no tasks under the given number!\n" << endl;
		}
	} while (n != -1);
	cout << "\nThe end.\n" << endl;

	delete[] flat;
	system("pause");
	return 0;
}
