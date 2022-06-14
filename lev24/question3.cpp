#include <iostream>
#include <string>
using namespace std;

int via[100];
int n,cnt,num;
string str[100];
string st,v="CHRISTMAS",way[9999];

void run(int lev) {
	if (lev == 4) {
		for (int x = 0; x < n; x++) {
			if (via[x] == 1) {
				st += str[x];
			}
		}
		for (int x = 0; x < n; x++) {
			way[num] += to_string(via[x]);
		}
		for (int x = 0; x < num; x++) {
			if (way[num] == way[x]) {
				st = "";
				num++;
				return;
			}
		}
		if (st == v) cnt++;
		st = "";
		num++;
		return;
	}
	for (int x = 0; x < n; x++) {
		if (via[x] != 1) {
			via[x] = 1;
			run(lev + 1);
			via[x] = 0;
		}
	}
}
int main()
{
	cin >> n;
	for (int x = 0; x < n; x++) {
		cin >> str[x];
	}
	run(0);
	cout << cnt;
	return 0;
}
