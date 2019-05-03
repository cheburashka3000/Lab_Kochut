#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	double sum = 0;
	int kol = 0;
	ifstream tyt ("/home/user/Documents/data_v13.txt");
	double chislo;
	if (tyt.is_open()) {
		while (tyt >> chislo) {
			sum += chislo;
			kol++;
		}
	} else {
		cout << "ERROR\n";
		return 0;
	}
	cout << setprecision(10) << sum/kol << endl;
	tyt.close();
	return 0;
}
