#include <iostream>
#include <string>
using namespace std;

struct NODE {
	int age;
	NODE *next1;
	NODE *next2;
};
int main()
{
	NODE man1, man2, man3, woman1, woman2, simson;
	NODE *head = &simson;
	simson.next1 = &woman1;
	simson.next2 = &woman2;
	woman1.next1 = &man1;
	woman1.next2 = &man2;
	woman2.next1 = &woman1;
	woman2.next2 = &man3;
	simson.age = 20;
	woman1.age = 29;
	woman2.age = 30;
	man1.age = 25;
	man2.age = 40;
	man3.age = 38;

	return 0;
}
