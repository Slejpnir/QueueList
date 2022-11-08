// QueueList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "List.h"
#include "QueueList.h"

using namespace std;

void init(Queue* q)
{
	q->front = nullptr;
	q->rear = nullptr;
}

void insert(Queue* q, int data)
{
	if (q->rear == nullptr && q->front == nullptr)
	{
		q->rear = init(data);
		q->front = q->rear;
	}
	else
	{
		q->rear = addNode(q->rear, data);
	}
	
}

bool isEmpty(Queue* q)
{
	return q->front == nullptr;
}

int remove(Queue* q)
{
	if (isEmpty(q))
	{
		cout << "Queue is empty";
		return -1;
	}
	int x = (q->front)->data;
	node* temp = q->front;
	q->front = q->front->next;
	delete temp;
	return x;
}

void print(Queue* q)
{
	if (isEmpty(q))
	{
		cout << "Queue is empty";
		return;
	}
	node* temp;
	for (temp = q->front; temp != nullptr; temp = temp->next)
	{
		cout << temp->data << " ";
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
