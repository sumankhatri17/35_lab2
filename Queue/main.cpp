#include<iostream>
#include"LinkedListQueue.h"

int main()
{
    IQueue *q = new LinkedListQueue();

    q->enQueue(8);
    q->enQueue(2);
    q->enQueue(5);
    q->enQueue(3);
    q->enQueue(7);
    q->enQueue(1);
      
    std::cout << "\n";
    q->traverse();

    q->deQueue();

    std::cout << "\nFront Element: " << q->front();
    std::cout << "\nRear Element: " << q->rear();

    std::cout << "\n";
    q->traverse();
}