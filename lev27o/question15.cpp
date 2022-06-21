#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(5);

int main()
{
	int n;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> n;
			arr[y].push_back(n);
		}
	}
	
	int cnt;
	for (int y = 4; y >= 0; y--) {
		cnt = 0;
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] == 1) cnt++;
		}
		if (cnt == 4) {
			for (int i = y; i >= 1; i--) {
				for (int x = 0; x < 4; x++) {
					arr[i][x] = arr[i - 1][x];
				}
			}
			for (int x = 0; x < 4; x++) {
				arr[0][x] = 0;
			}
			y++;
		}
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
