#include <iostream>
using namespace std;

int main()
{
	int arr[3][2][3];
	int a, b;
	
	cin >> a >> b;

	for (int z = 0; z < 3; z++) {
		for (int x = 0; x < 3; x++) {
			arr[z][0][x] = a;
			arr[z][1][x] = b;
		}
	}

	for (int z = 0; z < 3; z++) {
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				cout << arr[z][y][x] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
