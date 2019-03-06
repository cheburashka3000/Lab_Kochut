#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n, N;
	int iRes;
	double fRes;
// ввод данных
// значение N – номер зачетки, где
// П заменяется на 1
// И заменяется на 2
// Т заменяется на 3
// значение n – четыре младших цифры N
// Пример 18ПИ105 => N = 1812105, n = 2105
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите n: ";
	cin >> n;
// деление
	iRes = N / n;
	fRes = N / n;
	fRes = 1.0 * N / n;
// умножение и деление
	iRes = N / 10 * n;
	iRes = N * n / 10;
// сложение
	iRes = N + 2140000000;
	iRes = N + 2150000000;
// присваивание
	iRes = fRes;
// xor
	iRes = iRes ^ iRes;
	return iRes;
}
