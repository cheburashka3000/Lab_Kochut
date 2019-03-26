#include <iostream>
#include <string>
using namespace std;
int main()
{
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring ws = L"Прhивbет, боjль!";
	ws.replace (ws.find(L" "),1,L"");
	for (int i = 0; i < ws.length(); i++) {
		if ((ws[i] >= L'а' && ws[i] <= L'я') || (ws[i] >= L'А' && ws[i] <= L'Я')) {
			for(wchar_t & wc: ws) {
				wc = toupper(wc,loc);
			}
		} else ws.erase(i,1);
	}
	int key;
	cin >> key;
	for(unsigned int p = 0; p < ws.size(); p++)
		for(int j = 0; j < key; j++) {
			if(ws[p] != 'Я')
				ws[p] = ws[p] + 1;
			else
				ws[p] = 'А';
		}
	wcout<<ws<<endl;
}
