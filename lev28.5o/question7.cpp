#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[4][3] = {
		3,5,1,
		3,1,2,
		3,4,6,
		5,4,6,
	};
	int dat[7] = { 0 };
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			dat[arr[y][x]]++;
		}
	}

	for (int x = 1; x <= 6; x++) {
		cout << x << " ";
		for (int y = 0; y < dat[x]; y++) {
			cout << "* ";
		}
		cout << "\n";
	}

	return 0;
}
