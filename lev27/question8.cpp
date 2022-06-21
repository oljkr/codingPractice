#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<int> dat(200, 0);
	for (int x = 0; x < str.length(); x++) {
		dat[str[x]]++;
	}
	int cnt = 0;
	for (int x = 0; x < dat.size(); x++) {
		if (dat[x] > 0) cnt++;
	}
	cout << cnt << "종류";

	return 0;
}
