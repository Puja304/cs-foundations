#ifndef ListADT_H
#define ListADT_H


#include <iostream>
#include "LL.h"


class ListADT{
    private:
    Node* head = nullptr;
    int element_count = 0;

    public:
    ListADT();


    ListADT(ListADT& lst); // copy constructor

    ~ListADT();

    bool append(int theData);


    void print();


};

#endif