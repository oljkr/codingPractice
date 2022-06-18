#include <iostream>
#include <string>
using namespace std;

struct Node
{
	string name;
	Node *Love1;
	Node *Love2;
};
Node *head;
int main()
{
	head = new Node();
	head->name = "boss";
	head->Love1 = new Node();
	head->Love2 = new Node();

	head->Love1->name = "wife";
	head->Love1->Love1 = head;
	head->Love1->Love2 = head->Love2;

	head->Love2->name = "son";
	head->Love2->Love1 = new Node();
	head->Love2->Love2 = new Node();

	head->Love2->Love1->name = "girlfriend";
	head->Love2->Love1->Love1 = head->Love2;
	head->Love2->Love1->Love2 = head->Love2->Love2;

	head->Love2->Love2->name = "boyfriend";
	head->Love2->Love2->Love1 = head->Love2->Love1;

	cout << head->Love2->Love1->name << endl;
	cout << head->Love2->Love2->name;

	return 0;
}
