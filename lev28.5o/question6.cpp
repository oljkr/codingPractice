#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int dat[200] = { 0 };
	for (int x = 0; x < str.length(); x++) {
		dat[str[x]]++;
	}
	for (int x = 0; x < 200; x++) {
		if (dat[x] >= 2) cout << (char)x;
	}

	return 0;
}
