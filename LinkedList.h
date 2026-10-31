#ifndef LINKEDLIST.H
#define LINKEDLIST.H

typedef struct Node
{
	int value;
	Node* next;
}Node;
Node* createNode();
Node* AddToBeginning(Node* node, int val);
Node* RemoveFromBeginning(Node* node);