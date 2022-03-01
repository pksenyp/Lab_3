#ifndef FLAT_H
#define FLAT_H

#include <string>
#include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;

class Flat //class declaration
{
	private: //class declaration
		int rooms;
		int total;
		int living;
		int balconies;
		int floor;
		int storeys;
		string district;
	public: // open (interface) part
		void read_from(ifstream &file); // reading from a file
		void write_to(ofstream& file); // write to file
		void display(int i); // display
		string get_district();
		int get_rooms();
		int get_total();
		int get_living();
		int get_balconies();
		int get_floor();
		int get_storeys();
};

#endif // FLAT_H
