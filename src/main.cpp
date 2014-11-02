//
//  main.cpp
//  Bounded_Queue
//
//  Created by Kenta Onimura on 10/31/14.
//  Copyright (c) 2014 Kenta Onimura. All rights reserved.
//

#include <iostream>
#include <cassert>
#include "Bounded_Queue.h"
#include "tests.h"

int main() {
    assert(test_empty());
    assert(test_faulty_constructor());
    assert(test_full_enqueue());
    assert(test_empty_dequeue());
    assert(test_looping_head_and_tail());
    std::cout << "passed all tests" << std::endl;
    return 0;
}
