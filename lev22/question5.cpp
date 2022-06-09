#include <iostream>
using namespace std;
int n;
char path[5];

void run(int level)
{
	if (level == 4) {
		cout << path << endl;
		return;
	}

	for (int x = 0; x < n; x++) {
		path[level] = '1' + x;
		run(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> n;
	run(0);

	return 0;
}
