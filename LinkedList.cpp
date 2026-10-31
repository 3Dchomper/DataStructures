#include "LinkedList.h"
Node* createNode(int val, Node* next) {
	Node* n = new Node;
	n->value = val;
	n->next = next;
	return n;
}
Node* AddToBeginning(Node* node, int val) {
	Node* temp = createNode(val, node); // creates new list with old list as the next item
	return temp; // returns new list
}
Node* RemoveFromBeginning(Node* node) {
	node = node->next;
	return node;
}