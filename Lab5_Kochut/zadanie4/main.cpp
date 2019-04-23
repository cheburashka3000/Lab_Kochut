#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream iz ("/home/user/Documents/iz.txt");
	ofstream v ("/home/user/Documents/v.txt", ios::app);
	string s;
	getline(iz,s);
	v << s;
	iz.close();
	v.close();
	return 0;
}
