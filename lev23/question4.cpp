#include <iostream>
using namespace std;

char arr[6] = "BTSKR";
int n;
int via[10];
int num;

void run(int lev)
{
	if (lev == n) {
		if (via[2] == 1) num++;
		return;
	}
	for (int x = 0; x < 5; x++) {
		if (via[x] == 0) {
			via[x] = 1;
			run(lev + 1);
			via[x] = 0;
		}
	}
}
int main()
{
	cin >> n;
	run(0);
	cout << num;
	return 0;
}
