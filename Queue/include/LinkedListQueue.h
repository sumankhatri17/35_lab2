#include"IQueue.h"
#include"LinkedList.h"

class LinkedListQueue : public IQueue
{
    private:
        LinkedList list;
    public:
        LinkedListQueue() {}
        
        ~LinkedListQueue() {}
        bool isEmpty();
        void enQueue(int element);
        void deQueue();
        int front();
        int rear();
        void traverse();
};