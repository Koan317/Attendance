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

	stus.push_back("��Ⱥ");//1
	stus.push_back("��ܰ��");//2
	stus.push_back("�����");//3
	stus.push_back("κ����");//4
	stus.push_back("����Ұ");//5
	stus.push_back("��˶");//6
	stus.push_back("�ſ���");//7
	stus.push_back("���ѳ�");//8
	stus.push_back("�¼���");//9
	stus.push_back("��˼��");//10
	stus.push_back("�����");//11
	stus.push_back("������");//12
	stus.push_back("��ϼ");//13
	stus.push_back("�����");//14
	stus.push_back("����");//15
	stus.push_back("����ة");//16
	stus.push_back("��ΰ��");//17
	stus.push_back("������");//18
	stus.push_back("������");//19
	stus.push_back("�");//20
	stus.push_back("����΢");//21
	stus.push_back("������");//22

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