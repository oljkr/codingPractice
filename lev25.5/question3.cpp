#include <iostream>
#include <string>
using namespace std;

int isValid1(string str)
{
	if (!(str.find("bad", 0) == -1)) return 0;
	if (!(str.find("no", 0) == -1)) return 0;
	if (!(str.find("puck", 0) == -1)) return 0;

	return 1;
}

int isValid2(string str)
{
	int a = 0 , b = 0;
	while (1)
	{

		a = str.find("______", a);
		if (a == -1) break;
		for (int x = a; x <= str.length(); x++) {
			if (str[x] != '_') {
				b = x;
				break;
			}
		}
		if ((b - a) > 5) return 0;
		a = b + 1;
	}

	return 1;
}

int isValid3(string str)
{
	int dat[200] = { 0 };
	for (int x = 0; x < str.length(); x++) {
		dat[str[x]]++;
	}
	for (int x = 'a'; x <= 'z'; x++) {
		if (dat[x] > 5) return 0;
	}
	for (int x = 'A'; x <= 'Z'; x++) {
		if (dat[x] > 5) return 0;
	}
	for (int x = '0'; x <= '9'; x++) {
		if (dat[x] >= 1) return 0;
	}

	return 1;
}

int main()
{
	string str;
	cin >> str;
	int flg = 0;
	if (isValid1(str) == 0) flg = 1;
	if (isValid2(str) == 0) flg = 1;
	if (isValid3(str) == 0) flg = 1;
	if (flg) cout << "fail";
	else cout << "pass";

	return 0;
}
