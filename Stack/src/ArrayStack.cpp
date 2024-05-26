#include<iostream>
#include"ArrayStack.h"

ArrayStack::ArrayStack(int size) : size(size),topIndex(-1),data(new int[size]) {}

ArrayStack::~ArrayStack() 
{
    delete[] data;
}

bool ArrayStack::isEmpty()
{
    return topIndex < 0;
}

bool ArrayStack::isFull()
{
    return topIndex >= size-1;
}

void ArrayStack::push(int element)
{
    if(!isFull())
    {
        topIndex++;
        data[topIndex] = element;
    }
}

void ArrayStack::pop()
{
    if(!isEmpty())
        topIndex--;
}

int ArrayStack::top()
{
    if(!isEmpty())
        return data[topIndex];
}

void ArrayStack::traverse()
{
    if(isEmpty())
        std::cout << "Stack is Empty.";
    else
        for(int i=0;i<=topIndex;i++)
            std::cout << data[i] << " ";
}