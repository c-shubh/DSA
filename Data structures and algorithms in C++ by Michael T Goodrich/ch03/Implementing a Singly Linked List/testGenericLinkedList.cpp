#include "GenericLinkedList.hpp"

int main()
{
    LinkedList<int> ll = LinkedList<int>();
    for (int i = 1; i <= 10; i++)
    {
        ll.addFront((i));
    }
    ll.printList();
}