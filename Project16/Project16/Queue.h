#pragma once
#include "Header.h"

class Queue {
private:
	int size;
	int* queue;
public:

	Queue();
	~Queue();

	void add();
	void remove(int place);
	int getSize();
	bool isEmpty();
	void clear();

};