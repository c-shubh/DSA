#ifndef NODE_HPP
#define NODE_HPP

#include <string>
using std::string;

class Node
{
private:
    string elem;
    Node *next;

    friend class LinkedList;
};
#endif