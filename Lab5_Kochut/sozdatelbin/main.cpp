#include <iostream>
#include <fstream>
using namespace std;
struct demo {
	double x;
	double y;
	double z;
};
int main()
{
	demo var= {5.25, -1.26, 128.35};
	ofstream f("demo.bin", ios::out | ios::binary);
	f.write((char*)&var, sizeof var);
}
