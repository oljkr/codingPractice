#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	for (int x = 0; x < len; x++) {
		cout << str[x];
	}
	cout << endl;
	for (int x = len - 1; x >= 0; x--) {
		cout << str[x];
	}

	return 0;
}
