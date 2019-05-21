#include <iostream>
#include <algorithm>
#include <crypt.h>
#include <mutex>
using namespace std;

void findPass(string pass, const string& hash);

int main(int argc, char* argv[])
{
	thread Hash1(findPass,"123456789","$1$h7Skr0Vb$ipc8FG2QEWL88R6MIsJ/10");
	thread Hash2(findPass,"123456789","$1$Ok4ymcZA$1jL784kXhgSzhxR2LPw1J/");
	thread Hash3(findPass,"123456789","$1$QbqZMX5p$D6Nzw1jjtb82WY/BR19IY0");
	thread Hash4(findPass,"123456789","$1$26pf8KBS$oLz6obZMna.oe1oxcl/KY1");
	thread Hash5(findPass,"123456789","$1$2ZRJ5hDn$4g6I3I3xc7hnTXOZuLdTD1");
	thread Hash6(findPass,"123456789","$1$Dcoei9Gg$v2qSQ2NiW/yc2AyfvwRdU1");
	thread Hash7(findPass,"123456789","$1$pP1XCkdZ$qDlRuPr4Zc82y5K.uHLy//");
	thread Hash8(findPass,"123456789","$1$RNFck8WB$o74hlqGIWEaNydcwsTly..");
	Hash1.join();
	Hash2.join();
	Hash3.join();
	Hash4.join();
	Hash5.join();
	Hash6.join();
	Hash7.join();
	Hash8.join();
	return 0;
}

void findPass(string pass, const string& hash)
{
	static mutex mtx;
	crypt_data *pCryptData = new crypt_data;
	size_t pos = hash.find_last_of('$');
	string hashHead = hash.substr(0,pos);
	do {
		string newHash(crypt_r(pass.data(),hashHead.data(),pCryptData));
		if (newHash == hash) {
			lock_guard<mutex> lock(mtx);
			cout<<"Hash: "<<hash<<endl<<"Pass: "<<pass<<endl;
			break;
		}
	} while ( next_permutation( pass.begin(), pass.end() ) );
	delete pCryptData;
}
