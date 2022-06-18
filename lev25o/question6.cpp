#include <iostream>
using namespace std;

struct Node
{
	char value;
	Node *next;
};

int main()
{
	char a, b, c, d, e;
	cin >> a;
	Node *head = new Node();
	head->value = a;

	head->next = new Node();
	cin >> b;
	head->next->value = b;

	head->next->next = new Node();
	cin >> c;
	head->next->next->value = c;

	head->next->next->next = new Node();
	cin >> d;
	head->next->next->next->value = d;

	head->next->next->next->next = new Node();
	cin >> e;
	head->next->next->next->next->value = e;

	cout << head->next->next->next->next->value;	

	return 0;
}
