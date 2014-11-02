#ifndef Bounded_Queue_Bounded_Queue_h
#define Bounded_Queue_Bounded_Queue_h

class Bounded_Queue {
public:
    Bounded_Queue(int size = 1);
    ~Bounded_Queue();
    void enqueue(int target);
    int dequeue();
private:
    int capacity;
    int queue_size;
    int head;
    int tail;
    int* queue;
};

#endif
