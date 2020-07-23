#pragma once
#include <iostream>

struct Node
{
	int num;
	Node* nextnode;
};

class LinkedList
{
private:
	void DeleteLink(Node*);
	void AddLink(Node*);
	Node* FindNode(Node*,int);
	Node* FindNode(Node*, Node*);
	void AllDeleteNode(Node*);
	void AllNodePrint(Node*);

public:
	LinkedList();
	~LinkedList();
	void AddNode(int);
	void DeleteNode(Node*);
	void DeleteNode(int);
	Node* FindNode(int);
	void AllPrint();
	

private:
	Node* m_head;
	Node* m_tail;
};