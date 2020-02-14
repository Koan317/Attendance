#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
constexpr auto NUMBER = 22;
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	vector<string> stus;

	stus.push_back("ºØÈº");//1
	stus.push_back("ÕÅÜ°æÂ");//2
	stus.push_back("ÍõÁÕñº");//3
	stus.push_back("Îº³¬·²");//4
	stus.push_back("ÕÅÄÁÒ°");//5
	stus.push_back("ÍõË¶");//6
	stus.push_back("ÕÅ¿ÉĞù");//7
	stus.push_back("ÂÀ¼Ñ³Ç");//8
	stus.push_back("³Â¼Ñçù");//9
	stus.push_back("ÕÔË¼Äı");//10
	stus.push_back("º«ãå¾ı");//11
	stus.push_back("·¶öÎÑÒ");//12
	stus.push_back("ÁõÏ¼");//13
	stus.push_back("Îä³şº¼");//14
	stus.push_back("ÀîĞò");//15
	stus.push_back("Íõè÷Ø©");//16
	stus.push_back("ÁõÎ°ºê");//17
	stus.push_back("ÑîÓïêÏ");//18
	stus.push_back("ÑîÒÀæÃ");//19
	stus.push_back("Æîµ¤");//20
	stus.push_back("»³ÑàÎ¢");//21
	stus.push_back("ÂíÓêäü");//22

	vector<string>::iterator it = stus.begin();
	int num;

	while (1)
	{
		system("pause");
		num = rand() % NUMBER;
		time_t result = time(nullptr);
		cout << asctime(localtime(&result)) << it[num] << endl;
	}
}
#endif // _CRT_SECURE_NO_WARNINGS