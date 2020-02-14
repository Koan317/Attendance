#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

vector<string> createRoster();

int main()
{
	srand((unsigned)time(NULL));
	vector<string> roster = createRoster();
	vector<string>::iterator it = roster.begin();
	int num, totalNum = roster.size();

	while (1)
	{
		system("pause");
		num = rand() % totalNum;
		time_t result = time(nullptr);
		cout << asctime(localtime(&result)) << it[num] << endl;
	}
}
#endif // _CRT_SECURE_NO_WARNINGS