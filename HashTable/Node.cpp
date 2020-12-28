#include "Node.h"

Node::Node(Data* data, Node* next)
{
	this->data = data;
	this->next = next;
}

void Node::setNext(Node* nextNode)
{
	this->next = nextNode;
}

Data* Node::getData()
{
	return this->data;
}

Node* Node::getNext()
{
	return this->next;
}

bool Node::isEmpty()
{
	return this->next == nullptr;
}