#include <iostream>
using namespace std;

char arr[5];
char path[4];

int isSame(char path[])
{
	for (int y = 0; y < 2; y++) {
		for (int x = y + 1; x < 3; x++) {
			if (path[y] == path[x]) {
				return 1;
			}
		}
	}
	return 0;
}
void run(int level)
{
	int ret = 0;
	if (level == 3) {
		if (isSame(path) == 0) {
			cout << path << endl;
		}
		return;
	}

	for (int x = 0; x < 4; x++) {
		path[level] = arr[x];
		run(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> arr;
	run(0);

	return 0;
}
