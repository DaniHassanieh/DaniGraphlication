#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class LinkedList
{
public:
	// constructor
	LinkedList();
	// destructor
	~LinkedList();

	// accessors
	T& front();
	T& back();
	
	// mutators
	void pushFront(T data);
	void pushBack(T data);
	void popFront();
	void popBack();

private:
	struct Node
	{
		T payload;
		Node* next;
		Node* previous;
	}

	Node* head;
	Node* tail;
	// number of Nodes in LinkedList
	int count;
}

template <typename T>
LinkedList<T>::LinkedList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}

template <typename T>
~LinkedList<T>::LinkedList()
{
}

template <typename T>
T& LinkedList<T>::front()
{
	return head->payload;
}

template <typename T>
T& LinkedList<T>::front()
{
	return tail->payload;
}

template <typename T>
void LinkedList<T>::pushFront(T data)
{
	head = new Node{data, head, nullptr};
	head->next->previous = head;
	count++;
}

template <typename T>
void LinkedList<T>::pushBack(T data)
{
	tail = new Node{data, nullptr, tail};
	tail->previous->next = tail;
	count++;
}

template <typename T>
void LinkedList<T>:popFront()
{
	Node* tempNode = head;
	head = head->next;
	head->previous = nullptr;
	delete tempNode;
	count--;
}

template <typename T>
void LinkedList<T>:popFront()
{
	Node* tempNode = tail;
	tail = tail->previous;
	tail->next = nullptr;
	delete tempNode;
	count--;
}

#endif
