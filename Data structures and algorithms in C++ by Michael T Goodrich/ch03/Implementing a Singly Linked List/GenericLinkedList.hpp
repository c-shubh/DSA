#include <iostream>

template <typename E>
class LinkedList
{

public:
    LinkedList();
    ~LinkedList();
    bool empty() const;
    const E &front() const;
    void addFront(const E &e);
    void removeFront();
    void printList();

private:
    template <typename T>
    class Node
    {
    public:
        T elem;
        Node<T> *next;
    };

    Node<E> *head;
};

template <typename E>
LinkedList<E>::LinkedList() : head(NULL){};

template <typename E>
LinkedList<E>::~LinkedList()
{
    while (!empty())
    {
        removeFront();
    }
}

template <typename E>
bool LinkedList<E>::empty() const
{
    return head == NULL;
}

template <typename E>
const E &LinkedList<E>::front() const
{
    return head->elem;
}

template <typename E>
void LinkedList<E>::addFront(const E &e)
{
    Node<E> *newNode = new Node<E>();
    newNode->elem = e;
    newNode->next = head;
    head = newNode;
}

template <typename E>
void LinkedList<E>::removeFront()
{
    Node<E> *old = head;
    head = old->next;
    delete old;
}

template <typename E>
void LinkedList<E>::printList()
{
    Node<E> *n = head;
    while (n->next != NULL)
    {
        std::cout << n->elem << " ";
        n = n->next;
    }
    std::cout << n->elem << "\n";
}