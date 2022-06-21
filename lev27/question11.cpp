#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> arr(4);

void round(int ay, int ax)
{
	int dat[8][2] = {
		-1,-1,-1,0,-1,1,
		0,-1,0,1,
		1,-1,1,0,1,1
	};
	int dy, dx;
	for (int x = 0; x < 8; x++) {
		dy = ay + dat[x][0];
		dx = ax + dat[x][1];
		if (dy < 0 || dy>3 || dx < 0 || dx>3) continue;
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

	int ay, ax;

	for (int x = 0; x < 3; x++) {
		cin >> ay >> ax;
		arr[ay][ax] = 1;
		round(ay, ax);
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] == 0) cout << "_";
			if (arr[y][x] == 1) cout << "#";
			if (arr[y][x] == 2) cout << "@";
		}
		cout << endl;
	}
	return 0;
}
