#include <string>

#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

class FullList
	// Exception class thrown when list is full.
{};

class EmptyList
	// Exception class thrown when list is emtpy.
{};

template<class T>
class CircularType
{
public:
	CircularType();
	// Class constructor.
	~CircularType();
	// Destructor
	bool IsFull() const;
	// Function: Determines whether the list is full.
	// Pre:  List has been initialized.
	// Post: Function value = (list is full)
	bool IsEmpty() const;
	// Function: Determines whether the list is empty.
	// Pre:  List has been initialized.
	// Post: Function value = (list is empty)
	void AddItem(T item);
	// Function: Adds newItem to the sorted list.
	// Pre:  List has been initialized. List does not contain item.
	// Post: If (list is full), FullList exception is thrown;
	//       otherwise, newItem is inserted into the sorted list.

	void DeleteItem(T item);
	bool Contains(T item);
	int GetLength();
	void MakeEmpty();

	void ResetIterator();
	T GetNextItem();

private:
    struct Node
    {
        T info;
        Node* next;
    };

	void InsertNode(Node*& curr, Node*& prev, T newItem);
	// This places a new node with newItem between nodes curr and prev

	Node* tail;	// Location of last node

	int length;	// Length of the list
};

#include "CircularType.cpp"

#endif