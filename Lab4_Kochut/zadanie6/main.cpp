#include <iostream>
#include <cstring>
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
	String& operator=(const String& other) {
		if (this != &other) {
			delete[] value;
			len=other.len;
			value = new char[len+1];
			for (int i=0; i<=len; i++) {
				value[i]=other.value[i];
			}
		}
		return *this;
	};
	String& operator-() const {
		String ret;
		ret.len = len;
		delete[] ret.value;
		ret.value = new char[len+1];
		for (int i=0; i<len; i++) {
			ret.value[i] = value[len-i-1];
		}
		ret.value[len] = 0;
		return ret;
	};
	String& operator+( const String & s) {
			String tmp( *this );
			len += s.len;
			delete [] value;
			value = new char[ len + 1 ];
			strcpy( value, tmp.value );
			strcpy( value + tmp.len, s.value );
		return *this;
	}
	~String() {
		delete[] value;
		cout << "Деструктор тут\n";
	};
	friend ostream& operator<<(ostream& outputStream, const String & s) {
		return outputStream << s.value;
	};
	friend istream& operator>>(istream& inputStream, String & s) {
		char tmp[80];
		for (int i=0; s.value[i] != 0; i++)
			tmp[i] = s.value[i];
		delete[] s.value;
		s.len = strlen(tmp);
		s.value = new char [s.len + 1];
		for (int i=0; i<s.len; i++)
			s.value[i] = tmp[i];
		s.value[s.len] = 0;
		return inputStream >> s.value;
	};
};
int main()
{
	String s;
	String s1 = s;
	String s2 = "hello";
	cout << s2 << endl;
	cin >> s;
	s1 = s2;
	cout << s1 << endl;
	String q("Za "), w("chto?"),plak;
	plak = q + w;
	cout << plak << endl;
	return 0;
}
