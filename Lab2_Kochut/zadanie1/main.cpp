#include <iostream>
using namespace std;
int main()
{
	int N;
	float S;
	cout << "Длина последовательности = ";
	cin >> N;
	for (int i=0; i < N; ++i) {
		int a[i];
		cin >> a[i];
		S = S + a[i];
	}
	cout << "Среднее арифметическое чисел = ";
	S = S/N;
	cout << S << endl;
}
