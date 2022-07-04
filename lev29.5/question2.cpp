#include <iostream>
#include <vector>
using namespace std;

int evid[7] = { -1,0,0,1,2,4,4 };
int timeStamp[7] = { 8,3,5,6,8,9,10 };

void run(int now)
{
	if (evid[now] == -1) {
		cout << now << "번index(출발)\n";
		return;
	}
	run(evid[now]);
	cout << now << "번index(" << timeStamp[now] << "시)\n";
}

int main()
{
	int index;
	cin >> index;
	run(index);

	return 0;
}
