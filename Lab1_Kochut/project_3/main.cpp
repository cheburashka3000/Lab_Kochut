#include <iostream>
using namespace std;
void toUpperCase(char * s)
{
	int i = 0;
	while(s[i] != 0) {
		if (s[i] > 'a' && s[i] < 'z')
			s[i] = s[i] - 32;
		i++;
	}
}
int main()
{
	char test[] = "test";
	toUpperCase(test);
	cout << test << endl;
	char hello[] = "Hello! World";
	toUpperCase(hello);
	cout << hello << endl;
	return 0;
}
