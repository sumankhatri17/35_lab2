#include <iostream>
#include "LinkedListStack.h"

LinkedListStack::LinkedListStack() {}
LinkedListStack::~LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    return list.isEmpty();
}

void LinkedListStack::push(int data)
{
        list.addToHead(data);
}

void LinkedListStack::pop()
{
    if(!isEmpty())
        list.removeFromHead();
}

int LinkedListStack::top()
{
    if(!isEmpty())
        return list.HeadReturn();
}

void LinkedListStack::traverse()
{
    if(!isEmpty())
        list.traverse();
}