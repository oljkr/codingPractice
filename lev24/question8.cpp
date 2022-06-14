#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, replay;
	int a, b, c;
	cin >> str;
	cin >> a >> b >> c;
	int size = b - a + 1;
	replay = str.substr(a, b - a + 1);
	for (int x = 0; x < c; x++) {
		cout << replay;
	}

	return 0;
}
