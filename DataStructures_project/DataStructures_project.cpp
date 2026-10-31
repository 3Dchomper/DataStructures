// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

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