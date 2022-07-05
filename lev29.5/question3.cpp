#include <iostream>
#include <vector>
using namespace std;

int map[3][3];

int main()
{
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < 3; y++) {
		int flg = 0, num = map[y][0];
		for (int x = 1; x < 3; x++) {
			if (num == map[y][x]) continue;
			else flg = 1;
		}
		if (flg) cout << "x\n";
		else cout << num << "\n";
	}



	return 0;
}
