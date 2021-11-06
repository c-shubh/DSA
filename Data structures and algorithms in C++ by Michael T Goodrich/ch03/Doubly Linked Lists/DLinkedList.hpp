#ifndef D_LINKED_LIST_HPP
#define D_LINKED_LIST_HPP

#include "DNode.hpp"

class DLinkedList
{
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const E &front() const;
    const E &back() const;
    void addFront(const E &e);
    void addBack(const E &e);
    void removeFront();
    void removeBack();

private:
    DNode *header;
    DNode *trailer;

protected:
    void add(DNode *v, const E &e);
    void remove(DNode *v);
};

#endif