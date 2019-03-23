#include <iostream>
using namespace std;
int main()
{
	int S = 0;
	while (true) {
		int i=0;
		int a[i];
		cin >> a[i];
		if (a[i] ==0) {
			cout << "Сумма чисел = " << S << endl;
			return 0;
		}
		if (a[i] > 0) {
			S = S + a[i];
		}
	}
}
