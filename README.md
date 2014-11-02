Challenge Question for KPCB Engineering Fellows 2015 Application

Applicant: Kenta Onimura
================================================================================================
Problem
Using only primitive types, implement a bounded queue to store integers. The data structure should be optimized for algorithmic runtime, memory usage, and memory throughput. No external libraries should be imported and/or used. The solution should be delivered in one class that provides the following functions:

constructor: class should provide one method for object creation that takes an integer to set the size of the queue.

enqueue: function should take an integer and store it in the queue if the queue isn't full. The function should properly handle the case where the queue is already full.

dequeue: function should return an integer if one is currently stored in the queue. The function should properly handle the case where the queue is empty.

Instructions
Please provide the source, tests, runnable command-line function and all the resources required to compile (if necessary) and run the following program. You are free to use any coding language that compiles/runs on *nix operating systems and requires no licensed software.

================================================================================================

My Solution:

Language used: C++

Source code is located in src folder.
To compile a command-line function that runs basic tests, simply run command $make in root directory of folder. The produced executable in the root directory, Kenta_Bounded_Queue, is the runnable command-line function that will run all the tests specified in tests.cpp. $make clean can be run to remove executable and all object files.

Implementation wise, I first allocate memory according to size specified in constructor. This array of integers will serve as our queue, and we will have head and tail indexes indicating where to enqueue and dequeue respectively. If a user attempts to dequeue an empty array, an exception will be thrown. If a user attempts to enqueue an integer to a full array, an exception will also be thrown. To avoid any memory complications and hassles, the functions enqueue and dequeue will be circular in nature, meaning the head and tail indexes will loop around the end of the array given an exception isn't thrown.

Memory and Algorithm Runtime
Since we will always allocate memory according to integer passed in from constructor, the memory usage will be O(n) where n is size of array. Enqueing and dequeing will both have a time complexity of O(1) since array access is constant time.
