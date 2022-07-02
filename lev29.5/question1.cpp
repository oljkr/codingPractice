#include <iostream>
#include <vector>
using namespace std;

int map[10] = { 3,1,2,1,3,2,1,2,1,0 };
int path[10];
int x = 0;
void run(int now)
{
	if (now >= 9) {
		cout << "도착 ";
		return;
	}
	cout << map[now] << " ";
	path[x] = map[now];
	x++;
	run(now + map[now]);
	x--;
	cout << path[x] << " ";
}
int main()
{
	int n;
	cin >> n;
	cout << "시작 ";
	run(n-1);
	cout << "시작 ";

	return 0;
}
