#include <iostream>
#include "BST1.h"
using namespace std;



BST_Node::BST_Node(int a){
    value = a;
    left = nullptr;
    right = nullptr;
}

int BST_Node::getValue(){
    return value;
}

BST_Node* BST_Node::getLeft(){
    return left;
}

BST_Node* BST_Node::getRight(){
    return right;
}

void BST_Node::setLeft(BST_Node* leftEl){
    left = leftEl;
}


void BST_Node::setRight(BST_Node* rightEl){
    right = rightEl;
}

void BST::insert(int element){
    BST_Node* newElement = new BST_Node(element);
    if(!newElement) return;

    root = insertR(root, newElement);

    elementCount++;
    return;
}


void traverse_pre(BST* root){
    while (root != nullptr){
        cout << root->getValue() << endl;

        traverse_pre(root->getLeft());
        traverse_pre(root->getRight());

    }
}