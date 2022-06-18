#include <iostream>
#include <string>
using namespace std;

int isValid(string str)
{
	if (str[0] != 'B') return 0;
	int arr[2] = { 0 };
	for (int x = 0; x < str.length(); x++) {
		if (str[x] == 'B') arr[0]++;
		if (str[x] == 'F') arr[1]++;
	}
	if (arr[0] != arr[1]) return 0;
	return 1;
}

int main()
{
	string str;
	cin >> str;

	int n=isValid(str);
	if (n == 1) cout << "짝이맞음";
	else cout << "짝이안맞음";

	return 0;
}
