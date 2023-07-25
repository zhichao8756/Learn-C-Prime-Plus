//
// Created by EDY on 2023/7/24.
//
#include "iostream"
#include "queue.h"
#include "cstdlib"

Queue::Queue(int qs): qsize(qs) {
    front = rear = NULL;
    items = 0;
}
Queue::~Queue() {
    Node * temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}
bool Queue::isempty() const {
    return items == 0;
}
bool Queue::isfull() const {
    return items;
}
int Queue::queuecount() const
{
    return items;
}
// add item to queue
bool Queue::enqueue(const Item &item) {
    if (isfull()) {
        return false;
    }
    Node * add = new Node; // create node
    // on failure, new throws std::bad_alloc exception
    add->item = item; // set node pointers
    add->next = NULL; // or nullptr;
    items++;
    if (front == NULL) // if queue is empty,
        front = add; // place item at front
    else
        rear->next = add; // else place at rear
    rear = add;   // have rear point to new node
    return true;
}
bool Queue::dequeue(Item &item) {
    if (front == NULL)
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0) {
        rear = NULL;
    }
    return true;
}
// customer method
void Customer::set(long when) {
    processtime = std::rand() % 3 + 1;
    arrive = when;
}