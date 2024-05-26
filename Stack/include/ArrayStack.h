#include "IStack.h"

class ArrayStack : public IStack 
{
private:
    int *data;
    int topIndex;
    int size;
public:
    ArrayStack(int size);
    virtual ~ArrayStack();

    bool isEmpty();
    bool isFull();
    void push(int data);
    void pop();
    int top();
    void traverse();
};