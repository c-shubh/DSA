#ifndef D_NODE_HPP
#define D_NODE_HPP

#include <string>

typedef std::string E;
class DNode
{
private:
    E elem;
    DNode *prev;
    DNode *next;

    friend class DLinkedList;
};
#endif