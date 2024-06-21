#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class QuickQueue{
    private:
        T** queue;
        int size;
        int capacity;

    public:
        QuickQueue(); //defualt constructor 
        QuickQueue(const QuickQueue<T>& q); // 1/3 rule of 3
        QuickQueue<T>& operator=(const QuickQueue<T>& q); // 2/3 rule of 3
        ~QuickQueue(); // 3/3 rule of 3
        void enqueue(const T& item); //add an item to the queue
        T* dequeue(); //remove an item from the queue
        void resize(); //resize function 
};
#include "queue.hpp"
#endif