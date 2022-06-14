#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input[5];
	int cnt = 0;
	int a;
	for (int x = 0; x < 5; x++) {
		cin >> input[x];
	}

	for (int x = 0; x < 5; x++) {
		a = -1;
		while (1) {
			if (input[x].find("MCD", a + 1) == -1) break;
			cnt++;
			a = input[x].find("MCD", a + 1);
		}
	}
	cout << cnt;
	return 0;
}
