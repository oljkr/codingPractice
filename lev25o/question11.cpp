#include <iostream>
#include <string>
using namespace std;

int arr[3][3] = {
		0,5,4,
		3,0,0,
		0,0,1,
};
int result[3][3] = { 0 };

void roll()
{
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			result[x][2 - y] = arr[y][x];
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			arr[y][x] = result[y][x];
		}
	}
}
int main()
{
	
	int n;
	cin >> n;
	
	for (int z= 0; z < n; z++) {
		roll();
	}
	
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (result[y][x] == 0) cout << "_";
			else cout << result[y][x];
		}
		cout << endl;
	}

	return 0;
}
