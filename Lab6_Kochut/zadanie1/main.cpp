#include <iostream>
#include <iomanip>
using namespace std;
template <typename T> void shaker_sort (T *array, size_t size)
{
	for (size_t left_idx = 0, right_idx = size - 1; left_idx < right_idx;) {
		for (size_t idx = left_idx; idx < right_idx; idx++)
			if (array[idx] > array[idx+1])
				swap(array[idx], array[idx + 1]);
		right_idx--;
		for (size_t idx = right_idx; idx > left_idx; idx--)
			if (array[idx - 1] > array[idx])
				swap(array[idx - 1], array[idx]);
		left_idx++;
	}
}
int main()
{
	int a[] = {3,1,5,8,1,0,4,6,6,7};
	shaker_sort(a,10);
	for (int i = 0; i < 10; i++)
		cout << setw(6) << a[i];
	cout << endl << endl;
	double d[] = {3.25,1.86,5.59,8.46,1.15,0.64,4.544,6.64,6.94,7.54};
	shaker_sort(d,10);
	for (int i = 0; i < 10; i++)
		cout << setw(4) << d[i] <<"  ";
	cout << endl;
	return 0;
}
