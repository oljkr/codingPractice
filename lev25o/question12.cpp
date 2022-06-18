#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string arr[3];

	string temp;
	int a = 0;
	for (int x = 0; x < 3; x++) {
		temp = str.substr(a, 5);
		arr[x] = temp;
		a = a + 5;
	}
	for (int x = 0; x < 3; x++) {
		cout << arr[x] << "\n";
	}

	return 0;
}
