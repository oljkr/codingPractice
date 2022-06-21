#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int coin;
	cin >> coin;
	vector<int> arr;
	vector<int> num = { 35,17,7,1 };

	int a, b;
	for (int x = 0; x < 4; x++) {
		a = coin / num[x];
		arr.push_back(a);
		coin = coin % num[x];
	}

	for (int x = 0; x < 4; x++) {
		cout << num[x] << ":" << arr[x] << "개\n";
	}

	return 0;
}
