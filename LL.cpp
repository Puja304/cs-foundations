#include "LL.h"
#include <iostream>
using namespace std;


Node::Node(){
    data = 0;
    next = nullptr;
}

Node::Node(int theData) : data(theData){} ;

Node::Node(int theData, Node* theNextNode) : data(theData), next(theNextNode) {};

// end of LL.cpp

