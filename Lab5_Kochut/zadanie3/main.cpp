#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	float sum = 0;
	int kol = 0;
	ifstream tyt ("/home/user/Documents/z.txt");
	float chislo;
	if (tyt.is_open()) {
		while (tyt >> chislo) {
			sum += chislo;
			kol++;
		}
	} else {
		cout << "ERROR\n";
		return 0;
	}
	cout << sum/kol << endl;
	tyt.close();
	return 0;
}
