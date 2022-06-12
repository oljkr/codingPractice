#include <iostream>
using namespace std;
int n;
int num;
char path[100];

void run(int lev)
{
	if (lev == n) {
		num++;
		return;
	}

	for (int x = 0; x < 3; x++) {
		path[lev] = x + 'A';
		if ((lev >= 2) && (path[lev - 2] == path[lev - 1]) && path[lev - 1] == path[lev]) {
			continue;
		}
		run(lev + 1);
		path[lev] = 0;
	}

}
int main()
{
	cin >> n;
	run(0);
	cout << num;
	return 0;
}
