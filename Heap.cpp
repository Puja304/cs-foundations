#include <iostream>
using namespace std;



#include "Heap.h"


void reheapDown(int* array, int index_of_root, int elementCount){
    if((2*index_of_root+1) < elementCount){
        int max_child;
        if(2*index_of_root+2 < elementCount){
            int index_of_left = 2*index_of_root+1;
            int index_of_right = index_of_left +1;
            if(array[index_of_left] > array[index_of_right]){
                max_child = index_of_left;
            } else{
                max_child = index_of_right;
            }
        }
        else{
            max_child = index_of_left;
        }

        if(array[max_child] > array[index_of_root]){
            int temp = array[max_child];
            array[max_child] = array[index_of_root];
            array[index_of_root] = temp;
            reheapDown(array, max_child, elementCount);
        }

    }
    
}

template <class elementType>
Heap<elementType>::Heap(){
    
}

int main(void){

    int heap[] = {6,2,5,8,1,9};
    int elementCount = (sizeof(heap)/sizeof(heap[0]));
    int i = elementCount;
    while(i>= 0){
        reheapDown(heap, i, elementCount);
        i--;
    }
}