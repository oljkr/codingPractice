#include <iostream>
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
	int cnt = 0;
	int max = 0, maxIndex = 0;
	for (int i = 0; i < 4; i++) {
		for (int y = 0; y < 4; y++) {
			cnt = 0;
			for (int x = 0; x < 4; x++) {
				if (arr[y][x] == 1) cnt++;
			}
			if (cnt > max) {
				max = cnt;
				maxIndex = y;
			}
		}
		
	}
	cout << (char)(maxIndex + 'A');

	return 0;
}
