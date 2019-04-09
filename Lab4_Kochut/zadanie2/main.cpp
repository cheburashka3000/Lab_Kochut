#include <iostream>
using namespace std;
class String
{
	char * value;
	int len;
public:
	String():value(new char[1] {}),len(0) {
		cout << "Конструктор по умолчанию тут\n";
	};
	String(const String& s) {
		len = s.len;
		value = new char [len+1];
		for (int i = 0; i <= len; i++)
			value[i] = s.value[i];
		cout << "Конструктор копирование тут\n";
	};
	~String() {
		delete[] value;
		cout << "Деструктор тут\n";
	};
	friend ostream& operator<<(ostream& outputStream, const String & s) {
		return outputStream << s.value;
	};
};
int main()
{
	String s;
	String s1=s;
	cout << s1 << endl;
	return 0;
}
