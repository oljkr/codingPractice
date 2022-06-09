#include <iostream>
using namespace std;

char path[10];

void run(int level)
{
	if (level == 2) {
		cout << path << endl;
		return;
	}
	for (int x = 0; x < 3; x++) {
		path[level] = 'A' + x;
		run(level + 1);
		path[level] = 0;
	}

}
int main()
{
	run(0);

	return 0;
}
