#include <iostream>
using namespace std;

int arr[3][2][2] = {
	{2,4,1,5,},
	{2,3,3,6,},
	{7,3,1,5,},
};

int maxx(int num)
{
	int max = arr[num][0][0];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (max < arr[num][y][x]) {
				max = arr[num][y][x];
			}
		}
	}
	return max;
}


int minn(int num)
{
	int min = arr[num][0][0];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (min > arr[num][y][x]) {
				min = arr[num][y][x];
			}
		}
	}
	return min;
}

int main()
{
	int num;
	cin >> num;
	cout << "MAX=" << maxx(num) << endl;
	cout << "MIN=" << minn(num) << endl;
	return 0;
}
