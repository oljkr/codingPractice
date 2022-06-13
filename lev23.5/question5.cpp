#include <iostream>
using namespace std;

int main()
{
	int arr[8] = { 0 };
	int pivot, b = 1, s = 7, temp;
	for (int x = 0; x < 8; x++) {
		cin >> arr[x];
	}

	pivot = arr[0];

	while (1)
	{
		for (int x = 1; x < 8; x++) {
			if (arr[x] > pivot) {
				b = x;
				break;
			}
		}
		for (int x = 7; x >= 1; x--) {
			if (arr[x] < pivot) {
				s = x;
				break;
			}
		}

		if (s < b) {
			temp = arr[s];
			arr[s] = arr[0];
			arr[0] = temp;
			break;
		}
		else swap(arr[b], arr[s]);
	}

	for (int x = 0; x < 8; x++) {
		cout << arr[x] << " ";
	}

	return 0;
}
