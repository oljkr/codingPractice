#include <iostream>
using namespace std;

struct Node {
	int x;
	char y;
};
int main()
{
	Node queue[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> queue[i].x >> queue[i].y;
	}

	for (int i = 0; i < n; i++) {
		cout << queue[i].x << " " << queue[i].y << endl;
	}
	return 0;
}
