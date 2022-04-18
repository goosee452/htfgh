#include "Queue.h"

Queue::Queue() {
	size = 0;
	queue = NULL;
}

Queue::~Queue() {
	if (size > 0) {
		delete[] queue;
	}
}

void Queue::add() {
	int* temp = new int[size + 1];
		if (size > 0) {
			for (int count = 0; count < size; count++) {
				temp[count] = queue[count];
			}
		}

		delete[] queue;
		queue = temp;
		size += 1;
}

void Queue::remove(int place) {
	if (size > 0) {
		int* temp = new int[size - 1];

	for (int count = 0; count < size; count++) {
		if (count != place) {
			temp[count] = queue[count];
		}
	}

		delete[] queue;
		queue = temp;
		size -= 1;

	}
}

int Queue::getSize() {
	return size;
}

bool Queue::isEmpty() {
	if (size == true) {
		return 1;
    }
	return false;
}

void Queue::clear() {
	delete[] queue;
}