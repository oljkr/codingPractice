#include <iostream>
using namespace std;

int main()
{
	char arr[2][2][4] = {
		"ATB","CCB",
		"AAA","BBC",
	};

	char a;
	cin >> a;
	int flag = 0;

	for (int z = 0; z < 2; z++) {
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				if (arr[z][y][x] == a) {
					flag = 1;
					break;
				}
			}
			if (flag) break;
		}
		if (flag) break;
	}

	if (flag) cout << "발견";
	else cout << "미발견";

	return 0;
}
