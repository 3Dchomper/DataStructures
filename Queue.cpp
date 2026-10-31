#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
void initQueue(Queue* q, unsigned int size) {
	q->queue = calloc(size * sizeof(unsigned int)); // allocated array
	q->max = size; // max size for checking 
	q->count = 0; // amount of values
}
void cleanQueue(Queue* q) {
	q->count = 0;
}
bool isEmpty(Queue* s) {
	return count == 0; // list is empty
}
bool isFull(Queue* s) {
	return s->count >= s->(max-1); // max -1 because size of array is always -1 when adding items
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
