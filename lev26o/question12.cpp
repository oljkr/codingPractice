#include <iostream>
using namespace std;

struct Node {
	char c;
	Node *next;
};
Node *head;
Node *last;
Node *p;
void enque(char value)
{
	if (head == NULL) {
		head = new Node();
		head->c = value;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->c = value;
	}
}
void front()
{
	p = head;
}
void deque()
{
	head = head->next;
}

int main()
{
	string arr = "BIAH";
	for (int x = 0; x < 4; x++) {
		enque(arr[x]);
	}
	
	for(int i = 0; i < 4; i++){
		for (int x = 0; x < 5; x++) {
			front();
			deque();
			if (x == 4) {
				cout << p->c << " ";
				break;
			}
			enque(p->c);
		}
	}

	return 0;
}
