#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cin >> name;
	int n;
	string str[100];
	cin >> n;
	for (int x = 0; x < n; x++) {
		cin >> str[x];
	}

	for (int x = 0; x < n; x++) {
		if (str[x].find(name) == -1) {
			cout << "X\n";
		}
		else cout << "O\n";
	}

	return 0;
}
