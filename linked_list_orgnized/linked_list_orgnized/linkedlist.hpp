//
//  linkedlist.hpp
//  linked_list_orgnized
//
//  Created by Yan Peng on 1/13/22.
//

#ifndef linkedlist_hpp
#define linkedlist_hpp

#include "Node.hpp"


class LinkedList{
    
private:
    Node* head;
    Node* tail;
    
public:
    LinkedList(); // declare default constructor
    ~LinkedList();
    
    void addNode(int data);
    void reverse();
    void remove(int value);
    void printList();
    
};
#endif /* linkedlist_hpp */
