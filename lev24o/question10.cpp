#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[100];
	int data[4];
	cin >> str;
	for (int x = 0; x < 4; x++) {
		cin >> data[x];
	}

	char *ptrs[4];
	ptrs[0] = &str[data[0]];
	ptrs[1] = &str[data[1]];
	ptrs[2] = &str[data[2]];
	ptrs[3] = &str[data[3]];

	for (int x = 0; x < 4; x++) {
		cout << *ptrs[x];
	}

	return 0;
}
