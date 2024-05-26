#include<iostream>
#include"ArrayQueue.h"

ArrayQueue::ArrayQueue(int size):size(size),frontIndex(0),rearIndex(-1),data(new int[size]) {}

bool ArrayQueue::isEmpty()
{
    return frontIndex > rearIndex;
}

bool ArrayQueue::isFull()
{
    return rearIndex >= size-1;
}

void ArrayQueue::enQueue(int element)
{
        if (!isFull())
        {
                rearIndex++;
                data[rearIndex]=element;
        }
}       
         
int ArrayQueue::front()
{
        if(!isEmpty())
            return data[frontIndex];
}
        
int ArrayQueue::rear()
{
        if(!isEmpty())
            return data[rearIndex];
}

void ArrayQueue::deQueue()
{
     if(!isEmpty()) 
    {
        for(int i=frontIndex;i<rearIndex;i++)
                data[i]=data[i+1];
        
        rearIndex--;
     }
}

ArrayQueue::~ArrayQueue() 
{
        delete[] data;
}

void ArrayQueue::traverse()
{
    if(isEmpty())
        std::cout << "Queue is Empty.";
    else
        for(int i=frontIndex;i<=rearIndex;i++)
            std::cout << data[i] << " ";
}