#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[300];
	int dat[100] = { 0 };
	cin >> arr;
	int len = strlen(arr);
	for (int x = 0; x < len; x++) {
		dat[arr[x]]++;
	}
	int max = -999, min = 999;
	char maxx='A', minn = 'A';
	for (int x = 'A'; x <= 'Z'; x++) {
		if (dat[x] > max) {
			max = dat[x];
			maxx = x;
		}
		if (dat[x] < min) {
			min = dat[x];
			minn = x;
		}
	}
	cout << maxx << endl;
	cout << minn << endl;

	return 0;
}
