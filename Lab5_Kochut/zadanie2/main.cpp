#include <iostream>
#include <iomanip>
using namespace std;
void tablica (int sis)
{
	if (sis == 8)
		cout << oct;
	else if (sis == 10) {}
	else if (sis == 16)
		cout << hex;
	else {
		cerr << "ERROR\n";
		return;
	}
	for (int i = 1; i < sis; i++) {
		for (int j = 1; j < sis; j++)
			cout << setw (4) << i*j;
		cout << endl;
	}
}
int main()
{
	int sis;
	cout << "Введите систему счисления: ";
	cin >> sis;
	tablica(sis);
	return 0;
}
