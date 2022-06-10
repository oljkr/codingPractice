#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[4][11];
	int num[4] = { 0 };
	int a, b, temp;
	
	for (int x = 0; x < 4; x++) {
		cin >> arr[x];
		num[x] = x;
	}
	
	for (int y = 0; y < 3; y++) {
		for (int x = y + 1; x < 4; x++) {
			a = strlen(arr[num[y]]);
			b = strlen(arr[num[x]]);
			if (a > b) {
				temp = num[y];
				num[y] = num[x];
				num[x] = temp;
			}
		}
	}

	for (int x = 0; x < 4; x++) {
		cout << arr[num[x]] << "\n";
	}

	return 0;
}
