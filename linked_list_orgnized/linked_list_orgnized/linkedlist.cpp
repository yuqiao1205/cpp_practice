//
//  linkedlist.cpp
//  linked_list_orgnized
//
//  Created by Yan Peng on 1/13/22.
//
#include "linkedlist.hpp"
#include "Node.hpp"

#include <stdio.h>
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
    head=NULL;
    tail=NULL;
    
    cout << "LinkedList.constructor()" << endl;
}

LinkedList::~LinkedList(){
    
    cout << "LinkedList.destructor()" << endl;
    
    Node* prev = NULL;
    Node* node = head;
    
    while (node != NULL) {
        prev = node;
        node = node->next;
        
        delete prev;
    }
}

void LinkedList::reverse(){
    // Initialize current, previous and next pointers
    Node *current = head;
    Node *prev = NULL, *next = NULL;
    
    while (current != NULL) {
        // Store next
        next = current->next;
        current->next = prev; //真正翻转的一步，把当前的结点指向前面的结点
        
        prev = current;// 翻转做完了，做后面的变化准备。把当前的变成prev
        current = next; //把之前保存在next里的指向变成current
    }
    head = prev;//最后一个node
}

void LinkedList::addNode(int data){
    Node* temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    
    if (head == NULL){
        head = temp;
        tail = temp;
    }else{
        tail -> next = temp;
        tail = tail -> next;
    }
}

void LinkedList::remove(int value){
    if(head == NULL){
        return;
    }
    Node *pre = head;
    Node *cur = head -> next;
    
    while(cur != NULL){
        if (cur -> data == value){
            break;
        }
        pre = cur; //移动二个指针
        cur = cur -> next;
    }
    if (cur == NULL){
        return;
    }
    pre -> next = cur -> next;
    delete cur;
}

void LinkedList::printList() {
    Node* node = head;
    while (node != NULL) {
        cout << (node->data) << " ";
        
        node = node->next;
    }
    cout << endl;
}


