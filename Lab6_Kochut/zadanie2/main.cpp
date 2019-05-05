#include <iostream>
#include <iomanip>
using namespace std;
template <typename T> void shaker_sort (T *array, int size)
{
	for (int left_idx = 0, right_idx = size - 1; left_idx < right_idx;) {
		for (int idx = left_idx; idx < right_idx; idx++)
			if (array[idx] > array[idx+1])
				swap(array[idx], array[idx + 1]);
		right_idx--;
		for (int idx = right_idx; idx > left_idx; idx--)
			if (array[idx - 1] > array[idx])
				swap(array[idx - 1], array[idx]);
		left_idx++;
	}
}
template <typename T> class Rectangle
{
private:
	T vis = T();
	T hir = T();
public:
	Rectangle() {};
	Rectangle(const T visota, const T hirota):vis(visota), hir(hirota) {};
	bool operator > (const Rectangle srav) {
		return (vis*hir > srav.vis*srav.hir);
	}
	friend ostream& operator <<(ostream& outputStream, Rectangle srav) {
		return outputStream << srav.vis*srav.hir;
	}
};
int main()
{
	Rectangle<int> perv(23,5);
	Rectangle<int> vtor(5,4);
	Rectangle<int> zel[2] = {perv,vtor};
	shaker_sort(zel,2);
	Rectangle<double> dperv(4.2,1.3);
	Rectangle<double> dvtor(2.8,9.1);
	Rectangle<double> drob[2] = {dperv,dvtor};
	shaker_sort(drob,2);
	cout << "zel:" << endl;
	for (int i = 0; i < 2; i++)
		cout << setw(15) << zel[i];
	cout << endl << endl;
	cout << "drob:" << endl;
	for (int i = 0; i < 2; i++)
		cout << setw(15) << drob[i];
	cout << endl;
	return 0;
}
