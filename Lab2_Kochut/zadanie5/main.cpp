#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	while (true) {
		int i;
		int a[i];
		int p = 0;
		cin >> a[i];
		if (a[i] == 0) {
			return 0;
		}
		int d =  sqrt (a[i]);
		int D = 1;
		for (int l = 2; l <= d; ++l) {
			++D;
			if (a[i] % D == 0) {
				p = p +1;
			}
		}
		if (p == 0) {
			cout << "Простое" << endl;
		}
	}
}
