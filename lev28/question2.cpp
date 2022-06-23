#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> arr(n);

	int a;
	for (int y = 0; y < arr.size(); y++) {
		for (int x = 0; x < arr.size(); x++) {
			cin >> a;
			arr[y].push_back(a);
		}
	}

	vector<int> boss;
	vector<int> under;
	for (int x = 0; x < n; x++) {
		if (arr[0][x] == 1) {
			under.push_back(x);
		}
	}
	for (int y = 0; y < n; y++) {
		if (arr[y][0] == 1) {
			boss.push_back(y);
		}
	}

	cout << "boss:";
	for (int y = 0; y < boss.size(); y++) {
		cout << boss[y] << " ";
	}
	cout << "\n";
	cout<< "under:";
	for (int y = 0; y < under.size(); y++) {
		cout << under[y] << " ";
	}
	return 0;
}
