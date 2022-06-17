#include <iostream>
#include <string>
using namespace std;
 
string str;
 
int endA(int a)
{
	for (int x = a; x < str.length(); x++) {
		if (str[x] < 'A' || str[x] > 'Z') {
			return x;
		}
	}
	return -1;
}
int endN(int a)
{
	for (int x = a; x < str.length(); x++) {
		if (str[x] < '0' || str[x] > '9') {
			return x;
		}
	}
	return -1;
}
 
int main()
{
	cin >> str;
	int a=0, b = 0, pt;
	string temp;
	while (1)
	{
		if ('A' <= str[a] && str[a] <= 'Z') {
			b = endA(a+1);
			temp = str.substr(a, b - a);
			cout << temp;
			if (b == -1) break;
		}
		if ('1' <= str[a] && str[a] <= '9') {
			b = endN(a + 1);
			temp = str.substr(a, b - a);
			pt = stoi(temp);
			cout << "#" << pt + 17 << endl;
			if (b == -1) break;
		}
		a = b;
	}
 
	return 0;
}
