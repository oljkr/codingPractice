#include <iostream>
#include <string>
using namespace std;

struct Node {
	int age;
	Node *next1;
	Node *next2;
};
int main()
{	
	Node *head;
	Node simson, woman1, woman2, man1, man2, man3;
	head = &simson;
	simson.age = 20;
	head->next1 = &woman1;
	head->next2 = &woman2;

	head->next1->age = 29;
	head->next1->next1 = &man1;
	head->next1->next2 = &man2;
	head->next2->next1 = &woman1;
	head->next2->next2 = &man3;

	head->next1->next1->age = 29;
	head->next1->next1->next1 = NULL;
	head->next1->next1->next2 = NULL;

	head->next1->next2->age = 40;
	head->next1->next2->next1 = NULL;
	head->next1->next2->next2 = NULL;

	head->next2->next2->age = 38;
	head->next2->next2->next1 = NULL;
	head->next2->next2->next2 = NULL;

	return 0;
}
