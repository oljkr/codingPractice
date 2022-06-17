#include <iostream>
#include <string>
using namespace std;

int isValid(string str)
{
	int len = str.length();
	int dat[200] = { 0 };
	//소문자인지
	for (int x = 0; x < len; x++) {
		if (!('a' <= str[x] && str[x] <= 'z')) return 0;
		dat[str[x]]++;
	}
	//중복갯수 확인
	for (int x = 0; x < 200; x++) {
		if (dat[x] >= 3) return 0;
	}
	//모음갯수 확인
	int num = dat['a'] + dat['e'] + dat['i'] + dat['o'] + dat['u'];
	if (num != 3) return 0;

	return 1;
}

int main()
{
	int n;
	string str[100];
	cin >> n;
	for (int x = 0; x < n; x++) {
		cin >> str[x];
	}
	for (int x = 0; x < n; x++) {
		if (isValid(str[x]) == 1) cout << "good\n";
		else cout << "no\n";
	}
	return 0;
}
