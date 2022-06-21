#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> arr(4);

	int n;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> n;
			arr[y].push_back(n);
		}
	}
	int flg = 0;

	for (int y = 0; y < arr.size(); y++) {
		for (int x = 0; x < arr[y].size()-1; x++) {
			if (arr[y][x] == 1 && arr[y][x + 1] == 1) {
				flg = 1;
				break;
			}
		}
		if (flg) break;
	}

	
	for (int x = 0; x < 4; x++) {
		for (int y = 0; y <3; y++) {
			if (arr[y][x] == 1 && arr[y][x + 1] == 1) {
				flg = 1;
				break;
			}
		}
		if (flg) break;
	}

	if (flg) cout << "위험한 상태";
	else cout << "안전한 상태";
	return 0;
}
