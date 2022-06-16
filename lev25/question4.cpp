#include <iostream>
#include <string>
using namespace std;

void change1(string &str)//괄호 1개로 정리
{
	int a = 0, b = 0;
	while (1) {
		a = str.find('(', a);
		if (a == -1) break;
		b = str.find('(', a + 1);
		if (b == -1) break;
		if (b - 1 == a) {
			str.erase(b, 1);
			continue;
		}
		a = b;
		int d = 1;
	}
	a = 0, b = 0;
	while (1) {
		a = str.find(')', a);
		if (a == -1) break;
		b = str.find(')', a + 1);
		if (b == -1) break;
		if (b - 1 == a) {
			str.erase(b, 1);
			continue;
		}
		a = b;
		int e = 1;
	}
	return;
}

void change2(string &str)//^^2개로 정리
{
	int a = 0, b = 0, c = 0;
	while (1)
	{
		a = str.find('^', a);
		if (a == -1) break;
		b = str.find('^', a + 1);
		if (b == -1) break;
		c = str.find('^', b + 1);
		if (c == -1) break;
		if (b - a == 1 && c - b == 1) {
			while (1)
			{
				if (str[c] != '^') break;
				str.erase(c, 1);
			}
		}
		a = b + 1;
	}
	return;
}

void change3(string &str)//^과^사이 _로 정리
{
	int a = 0, b = 0;
	while (1)
	{
		a = str.find('^', a);
		if (a == -1)break;
		b = str.find('^', a + 1);
		if (b == -1) break;
		if (b - a == 2 && str[a + 1] != '_') {
			str[a + 1] = '_';
		}
		a = b;
	}
	return;
}
int main() {
	string str;
	cin >> str;

	change1(str);
	change2(str);
	change3(str);

	cout << str;

	return 0;
}
