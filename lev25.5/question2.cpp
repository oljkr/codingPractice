#include <iostream>
#include <string>
using namespace std;
int result = 0;
void endp(int a, string str)
{
	int b = 0;
	string temp;
	b = str.find(']', a + 1);
	temp = str.substr(a + 1, b - a - 1);
	result += stoi(temp);

	return;
}

void endg(int a, string str)
{
	int b = 0;
	string temp;
	b = str.find(']', a + 1);
	temp = str.substr(a + 1, b - a - 1);
	result *= stoi(temp);

	return;
}

int main()
{
	string str;
	cin >> str;
	int len = str.length();

	for (int x = 0; x < len; x++) {
		if (str[x] == '[') endp(x, str);
		if (str[x] == '{') endg(x, str);
	}

	cout << result;

	return 0;
}
