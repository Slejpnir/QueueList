// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "List.h"


node* init(int a)
{
	node* p = new node;
	p->data = a;
	p->next = nullptr;
	return p;
}

node* addNode(node* nd, int number)
{
	node* tmp, * p;
	tmp = new node;
	p = nd->next;
	nd->next = tmp;
	tmp->data = number;
	tmp->next = p;
	return tmp;
}

node* deleteNode(node* nd, node* head)
{
	node* p = head;
	while (p->next != nd)
	{
		p = p->next;
	}
	p->next = nd->next;
	delete nd;
	return p;
}



node* deleteHead(node* head)
{
	node* p = head->next;
	delete head;
	return p;
}

void printList(node* head)
{
	node* p = head;
	while (p != nullptr)
	{
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

node* swap(node* nd1, node* nd2, node* head)
{
	node* prev1, * prev2, * next1, * next2;
	prev1 = head;
	prev2 = head;
	if (prev1 == nd1)
	{
		prev1 = nullptr;
	}
	else
	{
		while (prev1->next != nd1)
		{
			prev1 = prev1->next;
		}
	}
	if (prev2 == nd2)
	{
		prev2 = nullptr;
	}
	else
	{
		while (prev2->next != nd2)
		{
			prev2 = prev2->next;
		}
	}
	next1 = nd1->next;
	next2 = nd2->next;
	if (nd2 == next1)
	{
		nd2->next = nd1;
		nd1->next = next2;
		if (nd1 != head)
			prev1->next = nd2;
	}
	else
	{
		if (nd1 == next2)
		{
			nd1->next = nd2;
			nd2->next = next1;
			if (nd2 != head)
				prev2->next = nd1;
		}
		else
		{
			nd1->next = next2;
			nd2->next = next1;
			if (nd1 != head)
				prev1->next = nd2;
			if (nd2 != head)
				prev2->next = nd1;
		}
	}
	if (nd1 == head)
		return nd2;
	if (nd2 == head)
		return nd1;
	return	head;
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
