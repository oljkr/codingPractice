#include <iostream>
using namespace std;

int map[3][4] = {
	3,2,5,3,
	7,6,1,6,
	4,9,2,7,
};
int num[4];

int main()
{
	
	for (int x = 0; x < 4; x++) {
		cin >> num[x];
	}

	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < num[x]; y++) {
			int temp = map[2][x];
			map[2][x] = map[1][x];
			map[1][x] = map[0][x];
			map[0][x] = temp;
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << map[y][x];
		}
		cout << endl;
	}
	return 0;
}
