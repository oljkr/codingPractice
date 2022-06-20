#include <iostream>
using namespace std;

struct Node
{
	int x;
	Node *next;
};
Node *head;
Node *last;
void Enqueue(int value)
{
	if (head == NULL) {
		head = new Node();
		head->x = value;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->x = value;
	}
}
void Dequeue()
{
	cout << head->x;
	head = head->next;
}
int main()
{
	int n;
	cin >> n;
	for (int x = 0; x < n; x++) {
		Enqueue(1);
		Enqueue(2);
		Enqueue(3);
		Dequeue();
		Dequeue();
		Dequeue();
	}

	return 0;
}
