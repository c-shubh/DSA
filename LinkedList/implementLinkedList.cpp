#include <iostream>
#include <stdexcept>
using namespace std;

class LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node *next = NULL;
        Node(int data) : data(data), next(NULL) {}
    };

        Node *start = NULL;

    /* Get pointer to node at given index */
    Node *getNode(int index)
    {
        if (index < 0)
        {
            throw out_of_range(to_string(index));
        }

        Node *node = start;
        int i = 0;
        while (node->next != NULL)
        {
            if (i == index)
            {
                return node;
            }
            node = node->next;
            i++;
        }
        if (i == index)
        {
            return node;
        }
        throw out_of_range(to_string(index));
    }

public:
    /* Insert node at end. */
    void insertNode(int data)
    {
        Node *newNode = new Node(data);

        /*  Insertion at beginning O(1)
            If start is NULL, node inserted at beginning of linked list.
        */
        if (isEmpty())
        {
            start = newNode;
            return;
        }

        /*  Insertion at end O(n)
            For inserting node at last, traverse the whole linked list to get the
            last node, then change its next pointer to the new node.

            Insertion at end O(1)
            To optimize insertion at end, a pointer to last node can be stored in 
            the linked list itself.
        */
        Node *lastNode = start;
        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }

    /* Delete last node. */
    void deleteNode()
    {
        if (isEmpty())
        {
            throw underflow_error("Linked list empty, cannot delete node.");
        }

        Node *lastNode = start, *secondLastNode = start;
        while (lastNode->next != NULL)
        {
            secondLastNode = lastNode;
            lastNode = lastNode->next;
        }

        if (lastNode == start)
        {
            start = NULL;
            return;
        }

        secondLastNode->next = NULL;
        delete lastNode;
    }

    /* Get value of node at given index. */
    int get(int index)
    {
        return getNode(index)->data;
    }

    /* Pretty print the list. */
    void printList()
    {
        Node *node = start;
        if (isEmpty())
        {
            cout << "[]" << endl;
            return;
        }
        cout << "[";
        while (node->next != NULL)
        {
            cout << node->data << ", ";
            node = node->next;
        }
        cout << node->data << "]" << endl;
    }

    /* Check whether the list is empty. */
    bool isEmpty()
    {
        return start == NULL;
    }
};

int main()
{
    LinkedList ll = LinkedList();
    for (int i = 1; i <= 10; i++)
    {
        ll.insertNode(i);
    }
    ll.printList();
    for (int i = 1; i <= 8; i++)
    {
        ll.deleteNode();
    }
    ll.printList();
}