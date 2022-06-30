#include <iostream>
#include <vector>
using namespace std;

struct Node {
	char x;
	Node *left;
	Node *right;
};
Node *head;

int cnt = 0;

void run(Node *now,int lev)
{
	if (lev == 2) {
		cout << now->x;
		return;
	}
	cout << now->x;
	cnt++;
	run(now->left,lev+1);
	if (now == head->right) return;
	run(now->right,lev+1);

}
int main()
{
	char str[6];
	for (int x = 0; x < 6; x++) {
		cin >> str[x];
	}
	
	head = new Node();
	head->x = str[0];
	head->left = new Node();
	head->left->x = str[1];
	head->right = new Node();
	head->right->x = str[2];
	head->left->left = new Node();
	head->left->left->x = str[3];
	head->left->right = new Node();
	head->left->right->x = str[4];
	head->right->left = new Node();
	head->right->left->x = str[5];

	run(head,0);

	return 0;
}
