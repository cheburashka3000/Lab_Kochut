#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int d;
	int D;
	int P[2094000];
	for (int p=0; p < 2094000; ++p) {
o:
		cin >> P[p];
		if (P[p] == 0) {
			break;
		}
		d =  sqrt (P[p]);
		D = 1;
		for (int i = 2; i <= d; ++i) {
			++D;
			if (P[p] % D == 0) {
				goto o;
			}
		}
		cout << "Простое" << endl;
	}
}
