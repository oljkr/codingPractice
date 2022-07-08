#include <iostream>
#include <vector>
using namespace std;

int map[4][5];
int yx[2][2];

int main()
{
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			cin >> map[y][x];
		}
	}
	int flg = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			if (map[y][x] == 1&& flg == 0){
				yx[0][0] = y;
				yx[0][1] = x;
				flg = 1;
			}
			if (map[y][x] == 1 && flg == 1) {
				yx[1][0] = y;
				yx[1][1] = x;
				flg = 2;
			}
			if (map[y][x] == 1 && flg == 2 && y >= yx[1][0] && x >= yx[1][1]) {
				yx[1][0] = y;
				yx[1][1] = x;
			}
		}
	}
	
	for (int y = 0; y < 2; y++) {
		cout << "(" << yx[y][0] << "," << yx[y][1] << ")\n";
	}
	return 0;
}
