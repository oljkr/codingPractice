#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = { 0 };

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			arr[y][3] += arr[y][x];
		}
	}

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			arr[3][x] += arr[y][x];
		}
	}

	for (int i = 0; i < 3; i++) {
		arr[3][3] += arr[i][i];
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
