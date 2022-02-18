//
//  main.cpp
//  linked list
//
//  Created by Yan Peng on 1/8/22.
//

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class node
{
public:
    T data;
    node* next;
};

template<typename T>
class linked_list
{
private:
    node<T> *head, *tail;
public:
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    
    template<typename C>
    void addNode(C data){
        node<T>* temp = new node<T>;
        temp -> data = data;
        temp -> next = NULL;
        
        if (head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail -> next = temp;
            tail = tail -> next;
        };
    }
    
    void add(T data){
        node<T>* temp = new node<T>;
        temp -> data = data;
        temp -> next = NULL;
        
        if (head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail -> next = temp;
            tail = tail -> next;
        };
    }
    
    void printList()
    {
        node<T>* temp = new node<T>;
        temp = head;
        while (temp != NULL) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }
    
};

template<typename T>
ostream& operator<<(ostream& os, node<T>* head)
{
    printList(head);
}

int main(int argc, const char * argv[]) {
    linked_list<int> list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(4);
    list.addNode(5);
    list.printList();
    
   
    cout<<"_______________________"<<endl;
    linked_list<double> list1;
    list1.addNode<double>(5.5);
    list1.addNode<double>(6.5);
    list1.printList();
    
    cout<<"_______________________"<<endl;
    linked_list<string> list2;
    list2.addNode<string>("A");
    list2.addNode<string>("B");
    list2.addNode<string>("C");
    list2.printList();
    
    cout<<"_______________________"<<endl;
    linked_list<string> list3;
    list3.add("A");
    list3.add("B");
    
    
    list3.printList();
    
    
    return 0;
}
