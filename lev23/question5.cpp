#include <iostream>
using namespace std;
char arr[6] = "EWABC";
char a;
char path[5];
int via[5];

void run(int lev)
{
	if (lev == 4) {
		cout << path << endl;
		return;
	}
	for (int x = 0; x < 5; x++) {
		if (arr[x] == a) continue;
		if (via[x] == 0) {
			via[x] = 1;
			path[lev] = arr[x];
			run(lev + 1);
			path[lev] = 0;
			via[x] = 0;
		}
	}
}

int main()
{
	cin >> a;
	run(0);

	return 0;
}
