#include <iostream>
#include <vector>
using namespace std;

int n;

void run(int now,vector<vector<int>> map)
{
	cout << now << " ";

	for (int x = 0; x < n; x++) {
		if (map[now][x] == 1) {
			run(x,map);
		}
	}
}
int main()
{
	cin >> n;
	vector<vector<int>> map(n);

	int input;	
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> input;
			map[y].push_back(input);
		}
	}

	run(0,map);

	return 0;
}
