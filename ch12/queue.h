//
// Created by EDY on 2023/7/24.
//

#ifndef QUEUE_H
#define QUEUE_H
class Customer {
private:
    long arrive;
    int processtime;
public:
    Customer() { arrive = processtime = 0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};
typedef Customer Item;
class Queue {
private:
    // class scope definitions
    // Node is a nested structure definition local to this class
    struct Node { Item item; struct Node * next;};
    static const int Q_size = 10;
    // private class members
    Node * front;  // pointer to front of Queue
    Node * rear;  // pointer to rear of Queue
    int items; // current number of items in Queue
    const int qsize = 0; // maximum number of items in Queue
    Queue(const Queue & q);
    Queue & operator=(const Queue & q) { return * this; }
public:
    Queue(int qs = Q_size);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item); //add item to end;
    bool dequeue(Item & item); // remove item form front

};
#endif
