#include <iostream>
using namespace std;
template <typename T1, typename T2> class Doublebox
{
private:
	T1 perv = T1();
	T2 vtor = T2();
public:
	Doublebox() {};
	Doublebox(const T1 p, const T2 v): perv(p), vtor(v) {};
	void set (const T1 p, const T2 v) {
		perv = p;
		vtor = v;
	}
	void get (T1& p, T2& v) {
		p = perv;
		v = vtor;
	}
};
int main()
{
	int zel;
	double toch;
	Doublebox <int, double> example;
	example.set(3,3.14);
	example.get(zel,toch);
	cout << zel << "   " << toch << endl;
	return 0;
}
