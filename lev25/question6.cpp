#include <iostream>
#include <string>
using namespace std;

int isValid2(string temp)
{
	int dat[200] = { 0 };
	int len = temp.length();
	for (int x = 0; x < len; x++) {
		if (dat[temp[x]] >= 1) return 0;
		dat[temp[x]]++;
	}
	return 1;
}
char isValid1(string str)
{
	int a = 0, b = 0;
	string temp;
	while (1)
	{
		a = str.find('<', a);
		if (a == -1) break;
		b = str.find('>', a + 1);
		temp = str.substr(a + 1, b - a - 1);
		if (isValid2(temp) == 0) return 'X';
		a = b + 1;
	}
	return 'O';
}

int main()
{
	string ox;
	string str[100];
	int n;
	cin >> n;
	for (int x = 0; x < n; x++) {
		cin >> str[x];
	}
	for (int x = 0; x < n; x++) {
		ox+=isValid1(str[x]);
	}
	cout << ox;

	return 0;
}
