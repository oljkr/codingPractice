#include <iostream>
#include <string>
using namespace std;
int result;

void searchm(string str)
{
	int a = 0, b = 0;
	string temp;
	a = str.find('-', a);
	if (a == -1) {
		temp = str.substr(0, str.length());
		result += stoi(temp);
		return;
	}
	temp = str.substr(0, a);
	result += stoi(temp);
	a = a + 1;
	while (1)
	{
		b = str.find('-', a);
		if (b == -1) {
			temp = str.substr(a, str.length()-a);
			result -= stoi(temp);
			return;
		}
		temp = str.substr(a, b - a);
		result -= stoi(temp);
		a = b + 1;
	}
}

void searchp(string str)
{
	int a = 0, b = 0;
	string temp;
	while (1)
	{
		b = str.find('+', a);
		if (b == -1) {
			temp = str.substr(a, str.length() - 1);
			searchm(temp);
			break;
		}
		temp = str.substr(a, b - a);
		searchm(temp);
		a = b + 1;
	}

	return;
}
int main()
{
	string str;
	cin >> str;
	
	searchp(str);

	cout << result;

	return 0;
}
