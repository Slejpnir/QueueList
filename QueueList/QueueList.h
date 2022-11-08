#pragma once
#include "List.h"

struct Queue
{
	node* front;
	node* rear;
};
void init(Queue*);
void insert(Queue*, int);
bool isEmpty(Queue*);
int remove(Queue*);
void print(Queue*);