#include <iostream>
#include <string>
using namespace std;

struct robot {
	int a, b;
	string t;
};
int main()
{	
	robot robert;
	cin >> robert.a >> robert.b >> robert.t;
	robot *p = &robert;
	cout << p->a + p->b << " " << p->t;

	return 0;
}
