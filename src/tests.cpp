#include <iostream>
#include "Bounded_Queue.h"
#include "tests.h"

//Queue can be initialized as empty
bool test_empty() {
    try {
        Bounded_Queue empty = Bounded_Queue(0);
    }
    catch (...){
        return false;
    }
    return true;
}

//Queue should throw exception when size input size is negative
bool test_faulty_constructor() {
    try {
        Bounded_Queue empty = Bounded_Queue(-1);
    }
    catch (...){
        return true;
    }
    return false;
}

//Queue should throw exception when trying to dequeue an empty queue
bool test_empty_dequeue() {
    try {
        Bounded_Queue target = Bounded_Queue(0);
        target.dequeue();
    }
    catch (...) {
        return true;
    }
    return false;
}

//Queue should throw exception when trying to enqueue a full queue
bool test_full_enqueue() {
    try {
        Bounded_Queue target = Bounded_Queue(0);
        target.enqueue(0);
    }
    catch (...) {
        return true;
    }
    return false;
}

//Queue should still function after enqueuing and dequeing makes head and/or tail loop to beginning of array
bool test_looping_head_and_tail() {
    try {
        Bounded_Queue target(34);
        for (int i = 0; i < 34; i++) {
            target.enqueue(i);
        }
        for (int i = 0; i < 17; i++) {
            target.dequeue();
        }
        for (int i = 15; i < 23; i++) {
            target.enqueue(2*i);
        }
        for (int i = 0; i < 25; i++) {
            target.dequeue();
        }
    }
    catch (...){
        return false;
    }
    return true;
}
