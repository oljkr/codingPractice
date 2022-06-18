#include <iostream>
using namespace std;

int main()
{
	int flg = 0;
	char *a = new char;
	char *b = new char;
	char *c = new char;

	cin >> *a >> *b >> *c;
	
	if ('a' <= *a && *a <= 'z') flg = 1;
	if ('a' <= *b && *b <= 'z') flg = 1;
	if ('a' <= *c && *c <= 'z') flg = 1;

	if (flg) cout << "소문자있음";
	else cout << "모두대문자";

	return 0;
}
