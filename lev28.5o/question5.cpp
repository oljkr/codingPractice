#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr;

	int n;
	cin >> n;
	int a = 10000;
	
	for (int x = 0; x < 4; x++) {
		arr.push_back(n / a);
		n = n % a;
		a = a / 10;		
	}

	arr.push_back(n / a);

	for (int x = 0; x < arr.size(); x++) {
		arr[x]++;
		if (arr[x] == 10) arr[x] = 0;
	}
	for (int x = arr.size() - 1; x >= 0; x--) {
		cout << arr[x];
	}

	return 0;
}
