class IQueue
{
public:
    IQueue() {}
    ~IQueue() {}

    virtual void enQueue(int element) = 0;
    virtual void deQueue() = 0;
    virtual bool isEmpty() = 0;
    virtual int front() = 0;
    virtual int rear() = 0;
    virtual void traverse() = 0;
};