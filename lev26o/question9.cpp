#include <iostream>
#include <string>
using namespace std;
int arr[4][4] = {
	3,5,1,4,
	2,2,1,1,
	0,1,2,3,
	3,1,3,1,
};

int main()
{
	char c;
	cin >> c;
	int num;
	if ('0' <= c && c <= '3') {
		for (int x = 0; x < 4; x++) {
			num = c-'0';
			cout << arr[num][x];
		}
	}
	if ('A' <= c && c <= 'D') {
		for (int x = 0; x < 4; x++) {
			num = c - 'A';
			cout << arr[x][num];
		}
	}

	return 0;
}
