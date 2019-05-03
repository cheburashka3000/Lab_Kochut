#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream iz ("/home/user/Documents/iz.txt");
	ofstream v ("/home/user/Documents/v.txt", ios::app);
	if (iz.is_open()) {
		iz.seekg(0, ios::end);
		int izsize = iz.tellg();
		iz.seekg(0, ios::beg);
		char *buf = new char [izsize];
		iz.read(buf, izsize);
		v.write((char*)buf, izsize);
		delete[] buf;
	} else {
		cout << "ERROR\n";
		return 0;
	}
	iz.close();
	v.close();
	return 0;
}
