#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> map(n);
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			int input;
			cin >> input;
			map[y].push_back(input);
		}
	}
	cout << "boss:";
	for (int y = 0; y < n; y++) {
		if (map[y][0] == 1) cout << y;
	}
	cout << "\n";
	cout << "under:";
	for (int x = 0; x < n; x++) {
		if (map[0][x] == 1) cout << x << " ";
	}

	return 0;
}
