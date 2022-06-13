#include <iostream>
using namespace std;

int arr[5] = { 3,5,1,9,7, };
int temp[5];

void change(int n)
{
	if (n == 0) return;
	if (n > 0) {
		for (int x = 0; x < n; x++) {
			swap(temp[x], arr[5 -n + x]);
		}
		for (int x = 0; x <(5-n); x++) {
			swap(arr[5-(n+1)-x], arr[5-x-1]);
		}
		for (int x = 0; x < n; x++) {
			swap(arr[x], temp[x]);
		}
	}
	if (n < 0)
	{
		n = (-1) * n;
		for (int x = 0; x < n; x++) {
			swap(arr[x], temp[5 - n + x]);
		}
		for (int x = 0; x < (5 - n); x++) {
			swap(arr[x], arr[5 -(n+1)+ x]);
		}
		for (int x = 0; x < n; x++) {
			swap(temp[5 - n + x], arr[5 - n + x]);
		}
	}
}
int main()
{
	int n = 0;
	char a;

	for (int x = 0; x < 4; x++) {
		cin >> a;
		if (a == 'R') n++;
		if (a == 'L') n--;
	}

	change(n);

	for (int x = 0; x < 5; x++) {
		cout << arr[x] << " ";
	}
	return 0;
}
