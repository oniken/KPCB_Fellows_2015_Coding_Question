//
//  tests.h
//  Bounded_Queue
//
//  Created by Kenta Onimura on 10/31/14.
//  Copyright (c) 2014 Kenta Onimura. All rights reserved.
//

#ifndef Bounded_Queue_tests_h
#define Bounded_Queue_tests_h

bool test_empty();
bool test_faulty_constructor();
bool test_empty_dequeue();
bool test_full_enqueue();
bool test_looping_head_and_tail();
#endif
