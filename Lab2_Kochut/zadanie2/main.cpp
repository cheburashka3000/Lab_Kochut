#include <iostream>
using namespace std;
int main()
{
	int N;
	int a[2094000];
	cout << "Искомое число: ";
	cin >> N;
	for (int i=0; i < 2094000; ++i) {
		cin >> a[i];
		if (a[i] ==0) {
			break;
		}
		if (a[i] == N) {
			cout << "Найдено " << N << endl;
			goto m1;
		}
	}
	cout << "Не найдено" << endl;
m1:
	;
}
