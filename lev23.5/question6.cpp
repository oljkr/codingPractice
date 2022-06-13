#include <iostream>
using namespace std;

int main()
{
	char arr1[4][5];
	char arr2[4][5] = {
		"ABCD",
		"BBAB",
		"CBAC",
		"BAAA",
	};

	int bucket[100] = { 0 };
	int maxIndex = 0;

	for (int y = 0; y < 4; y++) {
		cin >> arr1[y];
	}
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (arr1[y][x] == arr2[y][x]) {
				bucket[arr1[y][x]]++;
			}
		}
	}
	for (int x = 0; x < 100; x++) {
		if (bucket[x] > bucket[maxIndex]) {
			maxIndex = x;
		}
	}
	cout << (char)maxIndex;

	return 0;
}
