#include <iostream>
#include <string>
using namespace std;
char path[4];
void run(int lev, int close)
{
	if (lev == close)
	{
		cout << path << "\n";
		return;
	}
	for (int x = 0; x < 6; x++) {
		path[lev] = x + '1';
		run(lev + 1,close);
		path[lev] = 0;
	}
}

int main()
{
	int n;
	cin >> n;
	run(0, n);

	return 0;
}
