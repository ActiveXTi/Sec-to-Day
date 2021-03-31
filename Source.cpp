#include <iostream>

int main()
{
	std::cout << "초 수를 입력하십시오: ";
	long sec;
	std::cin >> sec;

	int dyr = sec / 86400;
	int hrr = (sec % 86400) / 3600;
	int mnr = (sec % 86400) % 3600 / 60;
	int rest = (sec % 86400) % 3600 % 60;

	std::cout << sec << "초 = " << dyr << "일, " << hrr << "시간, " << mnr << "분, " << rest << "초";

	return 0;
}