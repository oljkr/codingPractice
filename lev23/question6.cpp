#include <iostream>
using namespace std;

char arr[5];
int path[4];
int num;

void run(int lev)
{
	if (lev == 4) {
		num++;
		return;
	}
	for (int x = 0; x < 5; x++) {
		path[lev] = arr[x] - '0';
		if (lev>=1)
		{
			if ((path[lev - 1] - path[lev]) > 3) continue;
			if ((path[lev] - path[lev - 1]) > 3) continue;
		}
		run(lev + 1);
		path[lev] = 0;
	}
}
int main()
{
	cin >> arr;
	run(0);
	cout << num;

	return 0;
}
