#include <iostream>
#include <cstring>
using namespace std;

char arr[4][100];
int len[4];

int maxx(int len[])
{
	int max = len[0];
	int index = 0;
	for (int x = 1; x < 4; x++) {
		if (len[x] > max) {
			max = len[x];
			index = x;
		}
	}
	return index;
}

int minn(int len[])
{
	int min = len[0];
	int index = 0;
	for (int x = 1; x < 4; x++) {
		if (len[x] < min) {
			min = len[x];
			index = x;
		}
	}
	return index;
}

int main()
{
	int indexMax;
	int indexMin;

	for (int x = 0; x < 4; x++) {
		cin >> arr[x];
	}
	for (int x = 0; x < 4; x++) {
		len[x] = strlen(arr[x]);
	}

	indexMax = maxx(len);
	indexMin = minn(len);

	cout << "긴문장:" << indexMax << endl;
	cout << "짧은문장:" << indexMin;

	return 0;
}
