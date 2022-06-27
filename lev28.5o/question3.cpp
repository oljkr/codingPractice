#include <iostream>
#include <vector>
using namespace std;

vector<int> arr1(6);
vector<int> arr2(6);
vector<int> ans;
int main()
{
	for (int x = 0; x < 6; x++) {
		cin >> arr1[x];
	}
	for (int x = 0; x < 6; x++) {
		cin >> arr2[x];
	}

	int alpha=0, temp;
	for (int x = 5; x >= 0; x--) {
		temp = arr1[x] + arr2[x] + alpha;
		if (temp > 10) {
			ans.push_back(temp - 10);
			alpha = 1;
		}
		else {
			ans.push_back(temp);
			alpha = 0;
		}
	}

	for (int x = ans.size() - 1; x >= 0; x--)
	{
		cout << ans[x] << " ";
	}
	return 0;
}
