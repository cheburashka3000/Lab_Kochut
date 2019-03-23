#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Искомое число: ";
	cin >> N;
	while (true) {
		int i;
		int a[i];
		cin >> a[i];
		if (a[i] ==0) {
			cout << "Не найдено" << endl;
			return 0;
		}
		if (a[i] == N) {
			cout << "Найдено " << N << endl;
			return 0;
		}
		++i;
	}
}