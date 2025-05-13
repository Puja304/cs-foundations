#ifndef LL_H
#define LL_H


#include <iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;

    Node(); // default constructor

    Node(int theData); // paramatrized constructor 1
 
    Node(int theData, Node* theNextNode); // paramatrized constructor 2

};


#endif