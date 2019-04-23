#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Введите целочисленный массив:\n";
	int a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	cout << setw (12) << "8:" << setw (12) << "10:" << setw (12) << "16:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << setw (12) << oct << a[i] << setw (12) << dec << a[i] << setw (12) << hex << a[i] << endl;
	}
}
