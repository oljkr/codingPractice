#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<int>> arr(3);

int main()
{
	int n;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> n;
			arr[y].push_back(n);
		}
	}
	int max=-99, maxfy, maxfx, maxsy, maxsx;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < arr[y].size(); x++) {
			if (arr[y][x] > max) {
				max = arr[y][x];
				maxfy = y;
				maxfx = x;
			}
		}
	}
	max = -99;
	for (int y = 0; y < 3; y ++) {
		for (int x = 0; x < arr[y].size(); x++) {
			if (y == maxfy && x == maxfx) continue;
			if (arr[y][x] > max) {
				max = arr[y][x];
				maxsy = y;
				maxsx = x;
			}
		}
	}
	
	cout << "첫번째:" << arr[maxfy][maxfx] << "(" << maxfy << "," << maxfx << ")\n";
	cout << "두번째:" << arr[maxsy][maxsx] << "(" << maxsy << "," << maxsx << ")\n";

	return 0;
}
