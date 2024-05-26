#include"IQueue.h"

class ArrayQueue : public IQueue
{
    private:
        int *data;
        int size;
        int frontIndex;
        int rearIndex;
    public:
        ArrayQueue(int size);

        void enQueue(int element);
        void deQueue();
        bool isEmpty();
        bool isFull();
        int front();
        int rear();
        void traverse();

        ~ArrayQueue();
};