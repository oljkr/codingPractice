#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> arr(4);

void round(int ny, int nx) {
	int dat[8][2] = {
		-1,-1,-1,0,-1,1,
		0,-1,0,1,
		1,-1,1,0,1,1
	};
	int dy, dx;
	for (int x = 0; x < 8; x++) {
		dy = ny + dat[x][0];
		dx = nx + dat[x][1];
		if (dy < 0 || dy>3 || dx < 0 || dx>3) continue;
		if (arr[dy][dx] == 1) continue;
		arr[dy][dx] = 2;
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
	for (int x = 0; x < 3; x++) {
		cin >> ny >> nx;
		arr[ny][nx] = 1;
	}
	for (int y = 0; y < arr.size(); y++) {
		for (int x = 0; x < arr[y].size(); x++) {
			if (arr[y][x] == 1) round(y,x);
		}
	}
	
	for (int y = 0; y < arr.size(); y++) {
		for (int x = 0; x < arr[y].size(); x++) {
			if (arr[y][x] == 0) cout << "_";
			if (arr[y][x] == 1) cout << "#";
			if (arr[y][x] == 2) cout << "@";
		}
		cout << endl;
	}
	return 0;
}
