#include <iostream>
#include <string>
using namespace std;

struct robot {
	int a;
	int b;
	string t;
};

int main()
{
	robot a;
	cin >> a.a >> a.b >> a.t;
	robot *p = &a;
	cout << (*p).a + (*p).b << " " << (*p).t;
	
	
	return 0;
}
