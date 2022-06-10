#include <iostream>
using namespace std;
char ox[3] = "xo";
int n;
char path[100];

void run(int level)
{
	if (level == n) {
		cout << path << endl;
		return;
	}
	for (int x = 0; x < 2; x++) {
		path[level] = ox[x];
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
