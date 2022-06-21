#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	vector<int> arr(200, 0);

	for (int x = 0; x < str.length(); x++) {
		arr[str[x]]++;
	}
	int cnt = 0;
	for (int x = 0; x < arr.size(); x++) {
		if (arr[x] >= 1) cnt++;
	}
	cout << cnt << "종류";

	return 0;
}
