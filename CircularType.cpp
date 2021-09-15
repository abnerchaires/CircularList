
#include "CircularType.h"

template<class T>
CircularType<T>::CircularType()
{

}


template<class T>
CircularType<T>::~CircularType()
{

}

template<class T>
bool CircularType<T>::IsEmpty() const
{
    return false;
}

template<class T>
bool CircularType<T>::IsFull() const
{
    try
    {
        Node* location = new Node;
        delete location;
        return false;
    }
    catch (std::bad_alloc exception)
    {
        return true;
    }
}

template<class T>
void CircularType<T>::AddItem(T newItem) //finds the location to insert the item.
{
    if (IsEmpty())
    {
        Node* newNode = newNode;
        newNode->next = newNode;
        newNode->info = newItem;
        tail = newNode;
        length++;
        return;
    }

    Node* predLoc = tail; // starts at "tail"
    Node* curr = tail->next; // starts at "head".
    while (curr != tail)
    {
        if (newItem < curr->info)
        {
            InsertNode(curr, predLoc, newItem);
            // no bookkeeping needed here because it's already done in the helper InsertNode function.
            return;
        }
        predLoc = curr;
        curr = curr->next;
    }
    InsertNode(tail, tail->next , newItem)
    tail = tail->next;
}


template<class T>
inline void CircularType<T>::ResetIterator()
{
}

template<class T>
T CircularType<T>::GetNextItem()
{
    return false;
}

template<class T>
void CircularType<T>::InsertNode(Node*& curr, Node*& predLoc, T newItem)
{

    if (IsFull())
    {
        throw FullList();
    }

    Node* newNode = new Node;
    newNode->next = curr;
    newNode->info = newItem;
    predLoc->next = newNode;
    ++length;

}

