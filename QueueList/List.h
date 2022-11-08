#pragma once

struct node
{
	int data;
	node* next;
};
node* init(int);
node* addNode(node* nd, int number);
node* deleteNode(node* nd, node* head);
node* deleteHead(node* head);
void printList(node* head);
node* swap(node* nd1, node* nd2, node* head);