#include <iostream>
#include <string>
using namespace std;
void replace(string &str, string before, string after)
{
	int a = 0;
	int len = before.length();

	while (1)
	{
		a = str.find(before, a);
		if (a == -1) break;
		str.erase(a, len);
		str.insert(a, after);
		a = a + 1;
	}

	return;
}
int main()
{
	string before[5] = {
		"KFC","MC","BICMAC","SHACK","SONY",
	};
	string after[5] = {
		"#BBQ#","#BBQ#","#MACBOOK#","#SHOCK#","#NONY#",
	};
	string str;
	cin >> str;
	for (int x = 0; x < 5; x++) {
		replace(str, before[x], after[x]);
		int d = 1;
	}
	cout << str;
	
	return 0;
}
