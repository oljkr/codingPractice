#include <iostream>
using namespace std;

int main()
{
	int arr[3][4] = { 0 };
	int ay, ax, cnt = 0, flg = 0;
	for (int x = 0; x < 3; x++) {
		cin >> ay >> ax;
		arr[ay][ax] = 1;
	}
	for (int y = 0; y < 3; y++) {
		cnt = 0;
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] == 1) cnt++;
		}
		if (cnt >= 2) {
			flg = 1;
			break;
		}
	}
	if (flg == 0)
	{
		for (int x = 0; x < 4; x++) {
			cnt = 0;
			for (int y = 0; y < 3; y++) {
				if (arr[y][x] == 1) cnt++;
			}
			if (cnt >= 2) {
				flg = 1;
				break;
			}
		}
	}

	if (flg == 0) cout << "안전";
	else cout << "위험";

	return 0;
}
