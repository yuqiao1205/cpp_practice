//
//  main.cpp
//  binaryTree
//
//  Created by Yan Peng on 2/11/22.
//

#include <iostream>
#include <stdlib.h>
using namespace std;


typedef struct Node{
    struct Node* lchild;
    struct Node* rchild;
    int data;
    Node(int x):data(x),lchild(NULL),rchild(NULL){}
}BiTreeNode,*BiTree;


//先序创建二叉树
BiTree PreCreateTree(){
    BiTree T;
    int  data;
    cin >> data;
    if(data==0){
        T=NULL;
    }else{
        T = (BiTree)malloc(sizeof(BiTreeNode));
        T->data = data;
        
        T->lchild = PreCreateTree();
        T->rchild = PreCreateTree();
    }
    return T;
}

void PreOrder(BiTree T){
    if(T){
        cout<<T->data<<" ";
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

//release memory
BiTree FreeTree(BiTree T){
    if(T){
        FreeTree(T->lchild);
        FreeTree(T->rchild);
        free(T);
        T=NULL;
    }
    return T;
}

int main(int argc, const char * argv[]) {
    BiTree root;
    cout << "enter node by preorder creat tree: ";
    root = PreCreateTree();
    
    cout << "preorder result" << endl;
    PreOrder(root);
    cout<<endl;
    
    return 0;
}

