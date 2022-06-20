#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int a = 0, b = 0;
	int rn = 0, flg = 0;
	for (int x = 0; x < str.length(); x++) {
		if (str[x] == '<') rn++;
		if (str[x] == '>') rn--;
		if (rn < 0) {
			flg = 1;
			break;
		}
	}

	if (rn != 0) flg = 1;

	if (flg) cout << "비정상";
	else cout << "정상";
	return 0;
}
