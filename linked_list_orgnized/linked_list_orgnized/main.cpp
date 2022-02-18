//
//  main.cpp
//  linked_list_orgnized
//
//  Created by Yan Peng on 1/13/22.
//

#include <iostream>
#include "Node.hpp"
#include "linkedlist.hpp"
using namespace std;

//ostream &operator<<( ostream& output,const Linkedlist& list)
//{
//
//    for(Node* p = list; p!=0;  p= p->next){
//              output << p -> data << endl;
//}
//        return output;
//}



int main(int argc, const char * argv[]) {
    
    LinkedList l1;

    l1.reverse();
    l1.printList();
    cout << "-------------- \n";
    
    LinkedList l2;
    cout << "before reverse: \n";
    l2.addNode(1);
    l2.addNode(2);
    l2.addNode(4);
    l2.addNode(5);
    l2.printList();
    cout << "after reverse: \n";
    l2.reverse();
    l2.printList();
    cout << "-------------- \n";
    cout << "removed list: \n";
    l2.remove(4);
    l2.printList();
    
    return 0;
    
   
}
