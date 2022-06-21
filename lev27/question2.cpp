#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name = "ABCD";
int arr[4][4] = { 0 };
int main()
{
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> arr[y][x];
		}
	}
	
	int cnt = 0;
	int max = 0;
	int maxIndex = 0;
	for (int y = 0; y < 4; y++) {
		cnt = 0;
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] == 1) cnt++;
		}
		if (cnt > max) {
			max = cnt;
			maxIndex = y;
		}
	}
	cout << name[maxIndex];


	return 0;
}
