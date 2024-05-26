#include <iostream>
#include"LinkedListQueue.h"

bool LinkedListQueue::isEmpty()
{
    return list.isEmpty();
}

void LinkedListQueue::enQueue(int element)
{
    list.addToTail(element);
}

void LinkedListQueue::deQueue()
{
    if(!isEmpty())
        list.removeFromHead();
}

int LinkedListQueue::front()
{
    if(!isEmpty())
        return list.HeadReturn();
}

int LinkedListQueue::rear()
{
    if(!isEmpty())
        return list.TailReturn();
}

void LinkedListQueue::traverse()
{
    if(!isEmpty())
        list.traverse();
}