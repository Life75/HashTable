#pragma once
#include "Data.h"
class Node
{
public: 
	Node(Data* data, Node* next = nullptr);
	Node* getNext();
	void setNext(Node* nextNode);
	Data* getData();
	bool isEmpty();



private:
	Data* data = nullptr;
	Node* next = nullptr;
};

