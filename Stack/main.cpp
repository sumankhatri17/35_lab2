#include<iostream>
#include"LinkedListStack.h"

int main()
{
    IStack *s = new LinkedListStack();
    
    s->push(5);
    s->push(3);
    s->push(2);
    s->push(4);

    std::cout << "Top element = " << s->top();

    s->push(1);
    s->push(0);

    std::cout << "\n";
    s->traverse();

    s->pop();

    std::cout << "\n";
    s->traverse();
}