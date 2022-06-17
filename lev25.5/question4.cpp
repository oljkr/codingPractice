#include <iostream>
#include <string>
using namespace std;

int result = 1;
void gop1(string str)
{
	int len = str.length();
	if (len == 1) {
		if (str == "X") result *= 9;
		else return;
	}
	else if (len == 2) {
		if (str[1] == 'X') result *= 3;
	}
}

void gop2(string str)
{
	int len = str.length();
	if (len == 1) {
		if (str == "X") result *= 9;
	}
	if (len == 2) {
		if (str[0] == 'X'&&str[1]!='X') {
			if (str[1] == '0' || str[1] == '1') result *= 3;
			else result *= 2;
		}
		if (str[1] == 'X' && str[0] != 'X') {
			if (str[0] == '1' || str[0] == '2') result *= 10;
			else result *= 2;
		}
		if (str[0] == 'X' && str[1] == 'X') {
			result *= 22;
		}
	}
}

void split(string str)
{
	int a = 0, b = 0;
	string temp1,temp2;
	b = str.find('.', 6);
	temp1 = str.substr(5, b - 5);
	gop1(temp1);
	temp2 = str.substr(b + 1, str.length() - (b + 1));
	gop2(temp2);

}

int main()
{
	string str;
	cin >> str;
	split(str);

	cout << result;

	return 0;
}
