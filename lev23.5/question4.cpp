#include <iostream>
using namespace std;

int main()
{
	int arr[3][4] = {
		3,5,4,1,
		1,1,2,3,
		6,7,1,2,
	};

	int arr1[4] = { 0 };
	int arr2[4] = { 0 };

	for (int x = 0; x < 4; x++) {
		cin >> arr1[x];
	}

	arr2[3] = arr1[0];

	for (int x = 0; x < 3; x++) {
		arr2[x] = arr1[x + 1];
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			for (int i = 0; i < 4; i++) {
				if (arr[y][x] == arr1[i]) {
					arr[y][x] = arr2[i];
					break;
				}
			}
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
