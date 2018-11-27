#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <iostream>
#include "Node.hpp"
#include "Iterator.hpp"

class List{
public:
    List();
    void push_back(std::string data);
    void insert(Iterator iter, std::string data);
    Iterator erase(Iterator iter);
    Iterator begin();
    Iterator end();
    bool is_empty() const;
    void display();
    void display(Iterator pos);
private:
    Node* first;
    Node* last;
    friend class Iterator;
};

#endif /* List_hpp */
