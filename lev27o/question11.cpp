#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(4);

void round(int ny, int nx,int num)
{
	int dat[4][2] = { -1,0,0,-1,0,1,1,0 };
	int dy, dx;
	for (int x = 0; x < 4; x++) {
		dy = ny + dat[x][0];
		dx = nx + dat[x][1];
		if (dy < 0 || dy>3 || dx < 0 || dx>3) continue;
		if (arr[dy][dx] != 0) continue;
		arr[dy][dx] = num;
	}
}
int main()
{
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			arr[y].push_back(0);
		}
	}

	int ny, nx;
	cin >> ny >> nx;
	arr[ny][nx] = 1;
	int flg = 0, n = 1;
	while (1)
	{
		flg = 0;
		for (int y = 0; y < 4; y++) {
			for (int x = 0; x < 4; x++) {
				if (arr[y][x] == n) {
					round(y, x, n+1);
					flg = 1;
				}
			}
		}
		if (flg == 0) break;
		n = n + 1;
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
