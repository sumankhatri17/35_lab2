class IStack
{
    public:
        virtual bool isEmpty() = 0;
        virtual bool isFull() = 0;
        virtual void push(int data) = 0;
        virtual void pop() = 0;
        virtual int top() = 0;
        virtual void traverse() = 0;
};