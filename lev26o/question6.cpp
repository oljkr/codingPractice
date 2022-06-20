#include <iostream>
#include <string>
using namespace std;

int parsing(string str)
{
	int n, a, b;
	for (int x = 0; x < str.length(); x++) {
		if ('0' <= str[x] && str[x] <= '9') {
			a = x;
			break;
		}
	}
	for (int x = a; x < str.length(); x++) {
		if ('A' <= str[x] && str[x] <= 'Z') {
			b = x;
			break;
		}
	}
	n = stoi(str.substr(a, b - a));
	return n;
}
int main()
{
	string str;
	cin >> str;

	int num = parsing(str);
	cout << num + 5;
	return 0;
}
