#include <iostream>
using namespace std;
int main()
{
	int S;
	int a[2094000];
	for (int i=0; i < 2094000; ++i) {
		cin >> a[i];
		if (a[i] ==0) {
			break;
		}
		if (a[i] > 0) {
			S = S + a[i];
		}
	}
	cout << "Сумма чисел = " << S << endl;
}
