#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str = to_string(n);
	string temp;
	temp += str[2];
	temp += str[4];
	int num = stoi(temp) + 5;
	cout << num;

	return 0;
}
