// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
	unsigned int* queue;
	unsigned int count;
	unsigned int max;
} Queue;
void initQueue(Queue* q, unsigned int size) {
	q->queue = (unsigned int*)calloc(size, sizeof(unsigned int)); // allocated array
	q->max = size; // max size for checking 
	q->count = 0; // amount of values
}
void cleanQueue(Queue* q) {
	q->count = 0;
}
bool isEmpty(Queue* s) {
	return s->count == 0; // list is empty
}
bool isFull(Queue* s) {
	return s->count >= (s->max - 1); // max -1 because size of array is always -1 when adding items
}
void enqueue(Queue* q, unsigned int newValue) {
	if (!isFull(q)) { // checks if there is space in the queue
		q->queue[q->count + 1] = newValue;
		q->count++;
	}
}
int dequeue(Queue* q) {
	int num = -1; // -1 if list is empty
	if (!isEmpty(q)) {
		num = q->queue[q->count]; // num is now equal to the removed number
		q->count--;
	}
	return num;
}

int main() {
	Queue* q = new Queue;
	initQueue(q, 5);
	std::cout << isEmpty(q);
	std::cout << isFull(q);
	enqueue(q, 5);
	enqueue(q, 4);
	enqueue(q, 3);
	enqueue(q, 2);
	enqueue(q, 1);
	std::cout << isEmpty(q);
	std::cout << isFull(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	std::cout << isEmpty(q);
	std::cout << isFull(q);
	return 0;
}