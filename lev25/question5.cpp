#include <iostream>
#include <string>
using namespace std;

string str, mail[100], name[100], doname[100];

void split1(string str)
{
	int a = 0, b = 0, rn = 0;
	string temp;
	str += '|';
	str.insert(0, "|");
	while (1)
	{
		a = str.find('|', a);
		b = str.find('|', a + 1);
		if (b == -1) break;
		temp = str.substr(a + 1, b - a - 1);
		mail[rn++] = temp;
		a = b;
		int d = 1;
	}
	return;
}

void split2(string mail[])
{
	int a = 0, b = 0;
	string temp;
	for (int x = 0; x < 100; x++) {
		a = 0, b = 0;
		if (mail[x] == "") return;
		a = mail[x].find('@', a);
		temp = mail[x].substr(0, a);
		name[x] = temp;
		b = mail[x].find('.', a);
		temp = mail[x].substr(a + 1, b - a - 1);
		doname[x] = temp;
		int d = 1;
	}
	return;
}
int main()
{
	string str;
	cin >> str;
	split1(str);
	split2(mail);
	
	for (int x = 0; x < 100; x++) {
		if (mail[x] == "") break;
		cout << "[#" << name[x] << "] " << doname[x] << "\n";
	}

	return 0;
}
