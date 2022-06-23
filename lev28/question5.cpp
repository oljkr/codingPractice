#include <iostream>
#include <vector>
using namespace std;

int path[10];
void run(vector<vector<int>> arr, int lev, int now)
{
	if (lev == 2) {
		for (int x = 0; x < 3; x++) {
			cout << path[x] << " ";
		}
		cout << endl;
		return;
	}
	for (int x = 0; x < arr[now].size(); x++) {
		if (arr[now][x] == 1) {
			path[lev+1] = x;
			run(arr, lev + 1, x);
			path[lev+1] = 0;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> arr(n);

	int a;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> a;
			arr[y].push_back(a);
		}
	}
	path[0] = 0;
	run(arr,0, 0);
	return 0;
}
