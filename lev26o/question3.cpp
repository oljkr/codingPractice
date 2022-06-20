#include <iostream>
#include <string>
using namespace std;

int n;
char path[6];
int via[4];
void run(int lev)
{
	if (lev == n) {
		cout << path << endl;
		return;
	}
	for (int x = 0; x < 4; x++) {
		if (via[x] == 0) {
			via[x] = 1;
			path[lev] = 'A' + x;
			run(lev + 1);
			path[lev] = 0;
			via[x] = 0;
		}
	}
}
int main()
{
	cin >> n;

	run(0);

	return 0;
}
