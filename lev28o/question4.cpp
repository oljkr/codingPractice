#include <iostream>
#include <vector>
using namespace std;

int n;
int path[3];
void run(int now, int lev, vector<vector<int>> map)
{
	if (lev == 2) {
		for (int x = 0; x < 3; x++) {
			cout << path[x] << " ";
		}
		cout << "\n";
		return;
	}
	for (int x = 0; x < n; x++) {
		if (map[now][x] == 1) {
			path[lev + 1] = x;
			run(x, lev + 1 , map);
			path[lev + 1] = 0;
		}
	}
}

int main()
{
	cin >> n;
	int input;
	vector<vector<int>> map(n);
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> input;
			map[y].push_back(input);
		}
	}
	path[0] = 0;
	run(0, 0, map);

	return 0;
}
