#include <iostream>
using namespace std;

int main()
{
	char name[9] = "ABHCDGEF";
	int map[8][8] = {
		0,1,1,1,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,0,
		0,0,0,0,0,0,0,1,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
	};

	char c;
	cin >> c;
	int index;
	for (int x = 0; x < 8; x++) {
		if (name[x] == c) index = x;
	}
	int flg = 0;
	for (int y = 0; y < 8; y++) {
		if (map[y][index] == 1) {
			for (int x = 0; x < 8; x++) {
				if (x == index) continue;
				if (map[y][x] == 1) {
					cout << name[x] << " ";
					flg = 1;
				}
			}
		}
	}

	if (flg == 0) cout << "없음";
	return 0;
}
