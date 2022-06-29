#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int map[8][8] = {
		0,1,1,0,0,0,0,1,
		0,0,0,0,0,0,0,0,
		0,0,0,1,1,0,1,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
	};
	char c;
	cin >> c;
	int flg = 0;
	for (int y = 0; y < 8; y++) {
		if (map[y][c - 'A'] == 1) {
			for (int x = 0; x < 8; x++) {
				if (map[y][x] == 1 && x != (c - 'A')) {
					cout <<(char)( x + 'A') << " ";
					flg = 1;
				}
			}
		}
	}
	if (flg==0) cout << "없음";

	return 0;
}
