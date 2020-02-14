#ifndef ROSTER
#define ROSTER
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

vector<string> createRoster()
{
	ifstream fin("Roster.txt");
	vector<string> roster;
	if (!fin.is_open())
		cerr << "Error opening file!" << endl;
	else
	{
		string name;
		while (getline(fin, name))
			roster.push_back(name);
		fin.close();
	}
	return roster;
}
#endif //ROSTER