#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(4);

int check(int ny, int nx)
{
	int dat[4][2] = {
		-1,0,0,-1,0,1,1,0,
	};
	for (int x = 0; x < 4; x++) {
		int dy = ny + dat[x][0];
		int dx = nx + dat[x][1];
		if (dy < 0 || dy>3 || dx < 0 || dx>3) continue;
		if (arr[dy][dx] == 1) return 1;
	}
	return 0;
}

int main()
{
	

	int n;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> n;
			arr[y].push_back(n);
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] == 1) {
				if (check(y, x) == 1) {
					cout << "위험한 상태";
					return 0;
				}
			}
		}
	}

	cout << "안전한 상태";

	return 0;
}
