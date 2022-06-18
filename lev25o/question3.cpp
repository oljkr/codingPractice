#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node *left;
	Node *right;
};

int main()
{	
	Node *head;
	head = new Node();
	head->value = 3;
	head->left = new Node();
	head->left->value = 7;
	head->right = new Node();
	head->right->value = 6;
	head->right->left = new Node();
	head->right->left->value = 2;

	return 0;
}
