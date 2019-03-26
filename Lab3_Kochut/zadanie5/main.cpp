#include <iostream>
#include <string>
using namespace std;
int main()
{
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring ws = L"НСЪЦХРЛН9ЛХГГРЗУИИЕЛЪ";
	int key;
	cin >> key;
	for (int p = 0; p < ws.length(); p++) {
		if (ws[p] >= ' ' && ws[p] <= '~') {
			cout << "ОШИБКА\n";
			return 0;
		} else {
			for(int j = 0; j < key; j++) {
				if(ws[p] != 'А')
					ws[p] = ws[p] - 1;
				else
					ws[p] = 'Я';
			}
		}
	}
	wcout<<ws<<endl;
}
