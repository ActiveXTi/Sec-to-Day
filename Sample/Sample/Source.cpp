#include <iostream>

int main()
{
	std::cout << "�� ���� �Է��Ͻʽÿ�: ";
	long sec;
	std::cin >> sec;

	int dyr = sec / 86400;
	int hrr = (sec % 86400) / 3600;
	int mnr = (sec % 86400) % 3600 / 60;
	int rest = (sec % 86400) % 3600 % 60;

	std::cout << sec << "�� = " << dyr << "��, " << hrr << "�ð�, " << mnr << "��, " << rest << "��";

	return 0;
}