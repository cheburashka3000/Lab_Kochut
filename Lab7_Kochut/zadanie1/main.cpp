#include <iostream>
#include <algorithm>
#include <crypt.h>
using namespace std;
void findPass(string pass, const string& hash);
int main(int argc, char* argv[])
{
	string Hash[8] = {"$1$h7Skr0Vb$ipc8FG2QEWL88R6MIsJ/10","$1$Ok4ymcZA$1jL784kXhgSzhxR2LPw1J/","$1$QbqZMX5p$D6Nzw1jjtb82WY/BR19IY0","$1$26pf8KBS$oLz6obZMna.oe1oxcl/KY1","$1$2ZRJ5hDn$4g6I3I3xc7hnTXOZuLdTD1","$1$Dcoei9Gg$v2qSQ2NiW/yc2AyfvwRdU1","$1$pP1XCkdZ$qDlRuPr4Zc82y5K.uHLy//","$1$RNFck8WB$o74hlqGIWEaNydcwsTly.."};
	for (int i = 0; i < 8; i++)
			findPass("123456789", Hash[i]);
	return 0;
}
void findPass(string pass, const string& hash)
{
	crypt_data *pCryptData = new crypt_data;
	size_t pos = hash.find_last_of('$');
	string hashHead = hash.substr(0,pos);
	do {
		string newHash(crypt_r(pass.data(),hashHead.data(),pCryptData));
		if (newHash == hash) {
			cout<<"Hash: "<<hash<<endl<<"Pass: "<<pass<<endl;
			break;
		}
	} while ( next_permutation( pass.begin(), pass.end() ) );
	delete pCryptData;
}
