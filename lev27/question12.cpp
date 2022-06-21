#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(5);

void popLine(int a)
{
	for (int y = a; y >= 1; y--) {
		for (int x = 0; x < 4; x++) {
			arr[y][x] = arr[y - 1][x];
		}
	}
	for (int x = 0; x < 4; x++) {
		arr[0][x] = 0;
	}
}
int main()
{
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			int n;
			cin >> n;
			arr[y].push_back(n);
		}
	}

	int cnt;
	for (int y = 0; y <5 ; y++) {
		cnt = 0;
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] == 1) cnt++;
		}
		if (cnt == 4) popLine(y);
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
