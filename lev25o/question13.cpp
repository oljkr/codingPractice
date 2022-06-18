#include <iostream>
#include <string>
using namespace std;

int cnt = 0;
int min(int num[])
{
	int min = num[0], minIndex = 0;
	for (int x = 1; x < 6-cnt; x++) {
		if (num[x] < min) {
			min = num[x];
			minIndex = x;
		}
	}
	for (int x = minIndex; x < 6 - cnt-1; x++) {
		num[x] = num[x + 1];
	}
	cnt++;
	return min;
}
int max(int num[])
{
	int max = num[0], maxIndex = 0;
	for (int x = 1; x < 6 - cnt; x++) {
		if (num[x] > max) {
			max = num[x];
			maxIndex = x;
		}
	}
	for (int x = maxIndex; x < 6 - cnt - 1; x++) {
		num[x] = num[x + 1];
	}
	
	cnt++;
	return max;
}
int main()
{
	int num[6];
	string command;
	for (int x = 0; x < 6; x++) {
		cin >> num[x];
	}
	cin >> command;
	for (int x = 0; x < 6; x++) {
		if (command[x] == 'm') {
			cout<<min(num);
		}
		if (command[x] == 'x') {
			cout<<max(num);
		}
	}

	return 0;
}
