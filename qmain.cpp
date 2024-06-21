#include "queue.h"

int main(){
    QuickQueue<int> q1, q2;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q2 = q1;
    QuickQueue<int> q3 = q1;

    cout << "q1: " << endl;
    int* nextInt = q1.dequeue(); //pointer initialized to dequeue which returns a pointer to the first element in the queue
    int counter = 0;
    while(nextInt != nullptr){
        cout << "[" << ++counter << "]" << *nextInt << endl;
        nextInt = q1.dequeue();
    }

    cout << "q2: " << endl;
    nextInt = q2.dequeue();
    counter = 0;
    while(nextInt != nullptr){
        cout << "[" << ++counter << "]" << *nextInt << endl;
        nextInt = q2.dequeue();
    }

    cout << "q3: " << endl;
    nextInt = q3.dequeue();
    counter = 0;
    while(nextInt != nullptr){
        cout << "[" << ++counter << "]" << *nextInt << endl;
        nextInt = q3.dequeue();
    }


    QuickQueue<double> q4;
    q4.enqueue(1.45);
    q4.enqueue(2.45);
    q4.enqueue(3.45);
    q4.enqueue(4.45);
    q4.enqueue(5.45);
    q4.enqueue(6.45);


    cout << "q4: " << endl;
    double* nextDouble = q4.dequeue();
    counter = 0;
    while(nextDouble != nullptr){
        cout << "[" << ++counter << "]" << *nextDouble << endl;
        nextDouble = q4.dequeue();
    }

    cout << q1.dequeue() << endl;
    cout << q2.dequeue() << endl;
    cout << q3.dequeue() << endl;
    cout << q4.dequeue() << endl;
}