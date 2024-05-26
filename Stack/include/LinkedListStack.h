#include"IStack.h"
#include"LinkedList.h"

class LinkedListStack : public IStack
{
    private:
        LinkedList list;
    public:
        LinkedListStack();
        
        ~LinkedListStack();
        bool isEmpty();
        bool isFull() {}
        void push(int data);
        void pop();
        int top();
        void traverse();
};