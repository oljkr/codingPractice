#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<vector<char>> arr(4);

	string input;
	for (int y = 0; y < 4; y++) {
		cin >> input;
		for (int x = 0; x < input.length(); x++) {
			arr[y].push_back(input[x]);
		}
	}

	int d = arr[0].size();
	int max=0, min=99, maxIndex=-1, minIndex=-1;
	for (int y = 0; y < 4; y++) {
		if (arr[y].size() > max) {
			max = arr[y].size();
			maxIndex = y;
		}
		if (arr[y].size() < min) {
			min = arr[y].size();
			minIndex = y;
		}
	}
	for (int x = 0; x < arr[maxIndex].size(); x++) {
		arr[maxIndex][x] = arr[maxIndex][x] - 'A' + 'a';
	}
	for (int x = 0; x < arr[minIndex].size(); x++) {
		arr[minIndex][x] = arr[minIndex][x] - 'A' + 'a';
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < arr[y].size(); x++) {
			cout << arr[y][x];
		}
		cout << endl;
	}
	return 0;
}
