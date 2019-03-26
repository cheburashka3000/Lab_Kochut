#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s= "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	int z = 0, b = 0, o = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || s[i] == '\n')
			continue;
		if (s[i] >= '0' && s[i] <= '9')
			z++;
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			b++;
		else
			o++;
	}
	cout << "Колличество букв: " << b << endl;
	cout << "Колличество цифр: " << z << endl;
	cout << "Колличество других символов: " << o << endl;
	return 0;
}
