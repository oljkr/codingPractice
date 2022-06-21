#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<int>> arr(3);

int main()
{
	int input;
	for (int x = 0; x < 4; x++) {
		cin >> input;
		arr[0].push_back(input);
	}

	for (int y = 1; y <= 2; y++) {
		arr[y].push_back(1);
		for (int x = 1; x < 4; x++) {
			arr[y].push_back(arr[y][x - 1] + arr[y - 1][x]);
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < arr[y].size(); x++) {
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
