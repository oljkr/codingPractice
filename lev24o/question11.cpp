#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = {
		0,0,0,0,
		0,1,1,0,
		2,2,3,0,
		1,3,3,1,
	};
	int flg = 0;
	for (int x = 0; x < 4; x++) {
		for (int y = 3; y >= 1; y--) {
			if (arr[y - 1][x] == 0) continue;
			if (arr[y][x] < arr[y - 1][x]) {
				flg = 1;
				break;
			}
		}
		if (flg) break;
	}
	if (flg) cout << "안전하지않은성";
	else cout << "안전한성";
	return 0;
}
