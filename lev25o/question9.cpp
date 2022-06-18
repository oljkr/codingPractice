#include <iostream>
#include <string>
using namespace std;

int main()
{
	char arr[4][5];
	for (int x = 0; x < 4; x++) {
		cin >> arr[x];
	}

	int cnt;
	for (int x = 0; x < 4; x++) {
		cnt = 0;
		for (int y = 0; y < 4; y++) {
			if ('A' <= arr[y][x] && arr[y][x] <= 'Z') {
				cnt++;
			}
		}
		cout << cnt << " ";
	}

	return 0;
}
