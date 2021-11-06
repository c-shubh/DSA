#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <iostream>
#include "Node.hpp"

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    bool empty() const;
    const string &front() const;
    void addFront(const string &e);
    void removeFront();
    void printList();

private:
    Node *head;
};

#endif