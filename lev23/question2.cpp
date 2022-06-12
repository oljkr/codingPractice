#include <iostream>
using namespace std;

char arr[5];
char path[5];
int num;
void run(int lev)
{
	if (lev == 4) {
		num++;
		return;
	}
	for (int x = 0; x < 4; x++) {
		path[lev] = arr[x];
		if (lev >= 1) {
			if ((path[lev - 1] == 'B' && path[lev] == 'T') || (path[lev - 1] == 'T' && path[lev] == 'B')) {
				continue;
			}
		}
		run(lev + 1);
		path[lev] = 0;
	}

}
int main()
{
	for (int x = 0; x < 4; x++) {
		cin >> arr[x];
	}
	run(0);
	cout << num;
	return 0;
}
