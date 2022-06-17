#include <iostream>
#include <string>
using namespace std;

int isValid(string str, int b)
{
	if (str.substr(b, 4) == ".com") return 1;
	if (str.substr(b, 6) == ".co.kr") return 1;
	if (str.substr(b, 4) == ".org") return 1;
	if (str.substr(b, 4) == ".net") return 1;

	return 0;
}
int main()
{
	string str;
	cin >> str;
	
	int len = str.length();
	for (int x = 0; x < len; x++) {
		if ('A' <= str[x] && str[x] < 'Z') {
			str[x] = str[x] - 'A' + 'a';
		}
	}
	int a = 0, b = 0, cnt = 0;
	string temp;
	while (1)
	{
		a = str.find("http://", a);
		if (a == -1) break;
		b = str.find(".", a + 7);
		if (b == -1) break;
		temp = str.substr((a + 7), b - (a + 7));
		if (temp.length() < 3) {
			a = b + 1;
			continue;
		}
		if (isValid(str, b) == 1) cnt++;
		a = b + 1;
	}
	a = 0, b = 0;
	while (1)
	{
		a = str.find("https://", a);
		if (a == -1) break;
		b = str.find(".", a + 8);
		if (b == -1) break;
		temp = str.substr((a + 8), b - (a + 8));
		if (temp.length() < 3) {
			a = b + 1;
			continue;
		}
		if (isValid(str, b) == 1) cnt++;
		a = b + 1;
	}

	cout << cnt << "개";

	return 0;
}
