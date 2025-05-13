#include "ListADT.h"
#include <iostream>
using namespace std;


ListADT::ListADT(){

}

ListADT::ListADT(ListADT& lst){
    element_count = lst.element_count;
    head = new Node;
    Node* current_n = head;
    Node* current_old = lst.head;
    while(current_old != nullptr) {
        current_n->data = current_old->data;
        current_n->next = new Node;
        current_old = current_old->next;
    }
}

ListADT::~ListADT(){
    
}

bool ListADT::append(int newData){
    Node* nextNode = new Node(newData);
    if (nextNode == nullptr){
        return false;
    }
    if (head == nullptr){
        head = nextNode;
        nextNode->next = nullptr;
        return false;
    }
    Node* current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = nextNode;
    nextNode->next = nullptr;
    return true;
}

