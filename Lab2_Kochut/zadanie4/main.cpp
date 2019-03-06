#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int Z;
	int d;
	int D = 1;
	cin >> Z;
	d =  sqrt (Z);
	for (int i = 2; i <= d; ++i) {
		D++;
		if (Z % D == 0) {
			cout << "Нет" << endl;
			goto f;
		}
	}
	cout << "Да" << endl;
f:
	;
}
