
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
void CircularType<T>::AddItem(T newItem)
{

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
void CircularType<T>::InsertNode(Node*& curr, Node*& prev, T newItem)
{

}

