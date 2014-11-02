#include "Bounded_Queue.h"
#include <iostream>

Bounded_Queue::Bounded_Queue(int size) {
    if (size < 0) {
        std::cout << "Size of bounded queue must be nonnegative." << std::endl;
        throw "Constructor fail";
    }
    queue = new int[size];
    capacity = size;
    queue_size = 0;
    head = 0;
    tail = 0;
}

Bounded_Queue::~Bounded_Queue() {
    delete[] queue;
}

void Bounded_Queue::enqueue(int target) {
    if (queue_size >= capacity){
        std::cout << "Queue is full" << std::endl;
        throw "full";
    }
    ++queue_size;
    queue[head] = target;
    if (head == (capacity - 1))
        head = 0;
    else
        ++head;
}

int Bounded_Queue::dequeue() {
    if (queue_size == 0)
        throw "empty";
    --queue_size;
    int popped_value = queue[tail];
    if (tail == (capacity-1))
        tail = 0;
    else
        ++tail;
    return popped_value;
}
