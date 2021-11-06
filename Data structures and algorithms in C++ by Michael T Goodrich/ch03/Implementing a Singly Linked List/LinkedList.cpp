#include "LinkedList.hpp"

LinkedList::LinkedList() : head(NULL){};

LinkedList::~LinkedList()
{
    while (!empty())
    {
        removeFront();
    }
}

bool LinkedList::empty() const
{
    return head == NULL;
}

const string &LinkedList::front() const
{
    return head->elem;
}

void LinkedList::addFront(const string &e)
{
    Node *newNode = new Node();
    newNode->elem = e;
    newNode->next = head;
    head = newNode;
}

void LinkedList::removeFront()
{
    Node *old = head;
    head = old->next;
    delete old;
}

void LinkedList::printList()
{
    Node *n = head;
    while (n->next != NULL)
    {
        std::cout << n->elem << " ";
        n = n->next;
    }
    std::cout << n->elem << "\n";
}