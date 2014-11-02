default: all

all: tests.o Bounded_Queue.o src/main.cpp
	g++ -g -o Kenta_Bounded_Queue src/main.cpp tests.o Bounded_Queue.o

tests.o: src/tests.h src/Bounded_Queue.h src/tests.cpp
	g++ -g -c src/tests.cpp


Bounded_Queue.o: src/Bounded_Queue.h src/Bounded_Queue.cpp
	g++ -g -c src/Bounded_Queue.cpp

clean:
	rm -rf *.o *.dSYM Kenta_Bounded_Queue
