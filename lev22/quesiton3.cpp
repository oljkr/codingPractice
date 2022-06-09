#include <iostream>
using namespace std;

char path[10];
char arr[5] = "BGTK";
int a;

void run(int level)
{
	if (level == a) {
		cout << path << endl;
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
	cin >> a;
	run(0);
	return 0;
}
