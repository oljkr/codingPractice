#include <iostream>
#include <string>
using namespace std;

struct NODE {
	int x;
	NODE *next;
};
int main()
{
	NODE a, b, c;
	a.next = &b;
	b.next = &c;
	b.next->x = 4;
	a.next->x = 5;
	a.x = 3;

	return 0;
}
