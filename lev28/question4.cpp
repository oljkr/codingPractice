#include <iostream>
#include <vector>
using namespace std;

void run(vector<vector<int>> arr,int now)
{
	cout << now << " ";
	for (int x = 0; x < arr.size(); x++) {
		if (arr[now][x] == 1) {
			run(arr, x);
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

	run(arr,0);

	return 0;
}
