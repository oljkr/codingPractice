#include <iostream>
#include <vector>
using namespace std;

struct Node {
	char c;
	int n;
};

int main()
{
	int input;
	cin >> input;

	vector<Node> arr(input);

	char a;
	int b;
	for (int x = 0; x < input; x++) {
		cin >> a >> b;
		arr[x].c = a;
		arr[x].n = b;
	}

	for (int y = 0; y < arr.size(); y++) {
		for (int x = y + 1; x < arr.size(); x++) {
			if (arr[y].c > arr[x].c) {
				Node temp = arr[y];
				arr[y] = arr[x];
				arr[x] = temp;
			}
			if (arr[y].c < arr[x].c) continue;
			if (arr[y].c == arr[x].c) {
				if (arr[y].n > arr[x].n) {
					Node temp = arr[y];
					arr[y] = arr[x];
					arr[x] = temp;
				}
				else continue;
			}
		}
	}

	for (int x = 0; x < arr.size(); x++) {
		cout << arr[x].c << " " << arr[x].n << "\n";
	}
	return 0;
}
