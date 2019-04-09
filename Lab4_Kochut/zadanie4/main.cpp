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
	String(const char * s) {
		len = 0;
		while (s[len] != '\0') ++len;
		value = new char[len + 1];
		for (int i = 0; i <= len; i++)
			value[i] = s[i];
		cout << "Конструктор инициализации Си-строкой тут\n";
	};
	~String() {
		delete[] value;
		cout << "Деструктор тут\n";
	};
	friend ostream& operator<<(ostream& outputStream, const String & s) {
		return outputStream << s.value;
	};
	friend istream& operator>>(istream& in, const String & s) {
		return in >> s.value;
	};
};

int main()
{
	String s;
	String s1 = s;
	String s2 = "hello";
	cout << s2 << endl;
	cin >> s;
	return 0;
}
