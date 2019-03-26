#include <iostream>
#include <string>
using namespace std;
int main()
{
	int K;
	cin >> K;
	if (K >= 1 && K <= 100) {
		string V = " верблюд";
		string B = "В караване был";
		string v;
		string b;
		if (K > 1 && K < 5) {
			b = "о";
			v = "а";
		}
		if (K > 4 && K <= 100) {
			b = "о";
			v = "ов";
		}
		cout << B << b << " " << K << V << v << endl;
	}
}
