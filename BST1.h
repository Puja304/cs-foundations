
#ifndef BST1_H
#define BST1_H

#include <iostream>
using namespace std;

class BST_Node{
    private:
    int value;
    BST_Node* left;
    BST_Node* right;

    public:

    BST_Node(int a);

    int getValue();

    BST_Node* getLeft();

    BST_Node* getRight();

    void setLeft(BST_Node* leftEl);

    void setRight(BST_Node* rightEl);

};

class BST{
    private:
    BST_Node* root = nullptr;
    unsigned int elementCount = 0;
    BST_Node* insertR(BST_Node* subtree, BST_Node* newElement){
        if(subtree == nullptr) return subtree;

        if(subtree->getValue() > newElement->getValue()){
            subtree->setLeft(insertR(subtree->getLeft(), newElement));
        } else{
            subtree->setRight(insertR(subtree->getRight(), newElement));
        }

        return subtree;

    }

    public:

    BST();

    void insert(int element);

    void remove(int element);

    int getElementCount();

    //void traverse_pre(BST_Node* root);

    //void traverse_in(BST_Node* root);

    //void traverse_post(BST_Node* root);
};


#endif


