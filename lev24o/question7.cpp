#include <iostream>
#include <string>
using namespace std;

int arr[10][10] = { 0 };

int main()
{
	int a, b, flg = 0;
	for (int x = 0; x < 6; x++) {
		cin >> a >> b;
		arr[a][b]++;
	}
	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			if (arr[y][x] >= 2) {
				flg = 1;
				break;
			}
		}
		if (flg) break;
	}

	if (flg == 1) cout << "중복된좌표발견";
	else cout << "중복없음";
		
	return 0;
}
