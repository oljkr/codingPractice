#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> map(8);
string str;

void run(int now)
{
	cout << str[now];
	for (int x = 0; x < 8; x++) {
		if (map[now][x] == 1) {
			run(x);
		}
	}
}
int main()
{
	
	cin >> str;
	int input;
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			cin >> input;
			map[y].push_back(input);
		}
	}

	run(0);
	

	return 0;
}
