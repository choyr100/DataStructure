#include "LinkedList.h"

void LinkedList::DeleteLink(Node* node)
{
	Node* nd = FindNode(m_head, node);
	if (nd != nullptr)
	{
		if (node == m_tail)
			m_tail = nd;
		nd->nextnode = node->nextnode;
		delete node;
	}

}

void LinkedList::AddLink(Node* node)
{
	if (m_tail == nullptr)
		m_head->nextnode = node;
	else
		m_tail->nextnode = node;
	m_tail = node;
}

Node* LinkedList::FindNode(Node* node, int num)
{
	if (node->nextnode == nullptr) return nullptr;
	if (node->nextnode->num == num)
		return node->nextnode;
	else
		return FindNode(node->nextnode, num);
}

Node* LinkedList::FindNode(Node* node, Node* nd)
{
	if (node->nextnode == nullptr) return nullptr;
	if (node->nextnode == nd)
		return node;
	else
		return FindNode(node->nextnode, nd);
}

void LinkedList::AllDeleteNode(Node* node)
{
	if (node->nextnode != nullptr)
		AllDeleteNode(node->nextnode);
	delete node;
}

void LinkedList::AllNodePrint(Node* node)
{
	if (node != nullptr)
	{
		std::cout << node->num << std::endl;
		AllNodePrint(node->nextnode);
	}
}

LinkedList::LinkedList() : m_tail(nullptr)
{
	m_head = new Node;
	m_head->nextnode = nullptr;
}

LinkedList::~LinkedList()
{
	AllDeleteNode(m_head);
}

void LinkedList::AddNode(int num)
{
	Node* node = new Node;
	node->num = num;
	node->nextnode = nullptr;
	AddLink(node);
}

void LinkedList::DeleteNode(Node* node)
{
	DeleteLink(node);
}

void LinkedList::DeleteNode(int num)
{
	Node* node = FindNode(num);
	DeleteLink(node);

}

Node* LinkedList::FindNode(int num)
{
	Node* node = FindNode(m_head, num);
	return node;
}

void LinkedList::AllPrint()
{
	std::cout << "--------------" << std::endl;
	AllNodePrint(m_head->nextnode);
	std::cout << "--------------" << std::endl;
}
