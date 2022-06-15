#include <iostream>
#include <string>
using namespace std;

int isValid(string str)
{
	//[]가 있는지
	if (str.find('[') == -1) return 0;
	if (str.find(']') == -1) return 0;

	//숫자로 구성되어있는지
	int a = 0, b = 0, len;
	string temp;
	while (1) {
		a = str.find('[', a);
		if (a == -1) break;
		b = str.find(']', a + 1);
		temp = str.substr(a + 1, b - a-1);
		len = temp.length();
		//5문자인지
		if (len != 5) return 0;
		for (int x = 0; x < len; x++) {
			if (!('0' <= temp[x] && temp[x] <= '9')) return 0;
			a = b + 1;
		}
	}
	return 1;
}

void pt(string str)
{
	int a = 0, b = 0, len;
	string temp;
	while (1) {
		a = str.find('[', a);
		if (a == -1) break;
		b = str.find(']', a + 1);
		temp = str.substr(a, b - a + 1);
		int d = 1;
		cout << temp << endl;;
		a = b + 1;
	}
}

int main()
{
	string str[100];
	int n;
	cin >> n;
	for (int x = 0; x < n; x++) {
		cin >> str[x];
	}
	for (int x = 0; x < n; x++) {
		if (isValid(str[x]) == 1) {
			pt(str[x]);
		}
	}

	return 0;
}
