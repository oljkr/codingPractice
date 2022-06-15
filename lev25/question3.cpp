#include <iostream>
#include <string>
using namespace std;

int isValid(string temp)
{
	if (!(temp.length() > 0)) return 0;
	return 1;
}
void split(string result[], int &rn, string str, string tar)
{
	str += tar;
	int a = 0, b = 0;
	string temp;
	while (1)
	{
		b = str.find('_', a);
		if (b == -1) break;
		temp = str.substr(a, b - a);
		if (isValid(temp) == 1) {
			result[rn++] = temp;
		}
		a = b + 1;
	}
	return;
}
int main()
{
	string str, result[100];
	cin >> str;
	int rn = 0;
	split(result, rn, str,"_");
	for (int x = 0; x < 100; x++) {
		if (result[x] == "") break;
		cout << x + 1 << "#" << result[x] << endl;
	}

	return 0;
}
