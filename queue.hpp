#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "queue.h"
template <class T>
QuickQueue<T>::QuickQueue(){
    size = 0; 
    capacity = 5;
    queue = new T*[capacity];
}
template <class T>
QuickQueue<T>::QuickQueue(const QuickQueue<T>& q){
    size = q.size;
    capacity = q.capacity;
    queue = new T*[capacity];
    for(int i = 0; i < size; i++){
        queue[i] = q.queue[i];
    }
}
template <class T>
QuickQueue<T>& QuickQueue<T>::operator=(const QuickQueue& q){
    if(this != &q){
        size = q.size;
        capacity = q.capacity;
        
        delete [] queue; //go to office hours and ask if we need to do the for loop delete here too
        queue = new T*[capacity];
        for(int i = 0; i < size; i++){
            queue[i] = q.queue[i];
        }
        
    }
    return *this;
}
template <class T>
QuickQueue<T>::~QuickQueue(){
    for(int i = 0; i < size; i++){
        delete queue[i];
    }
    delete [] queue;
}
template <class T>
void QuickQueue<T>::resize(){
    capacity += 5;
    T** tmp = new T*[capacity];
    for(int i = 0; i < size; i++){
        tmp[i] = queue[i];
    }
    //for(int i = 0; i < size; i++){
       // delete queue[i];
   // }
    delete [] queue;
    queue = tmp;

}
template <class T>
void QuickQueue<T>::enqueue(const T& item){
    if(size >= capacity){
        resize();
    }
    queue[size++] = new T(item);
}
template <class T>
T* QuickQueue<T>::dequeue(){
    if(size > 0){
        T* front = queue[0];
        for (int i = 0; i < size - 1; i++){
            queue[i] = queue[i + 1];
        }
        queue[size - 1] = nullptr;
        size--;
        return front;
    }
    return nullptr;
}
#endif