#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> arr;
void push(int n)
{
	arr.push_back(n);
}
void printLast()
{
	cout << arr[arr.size() - 1];
}
void pop()
{
	arr.pop_back();
}
int main()
{
	int n;
	cin >> n;
	string cmd;
	int index;
	for (int x = 0; x < n; x++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> index;
			push(index);
		}
		if (cmd == "printLast") {
			printLast();
			cout << endl;
		}
		if (cmd == "pop") {
			pop();
		}
	}

	return 0;
}
