#include <iostream>
using namespace std;


int* merge(int* a, int* b, int sizeA, int sizeB){
    int big = max(sizeA, sizeB);
    int temp[big];
    for (int i = 0; i < big; i++){
        if(a[i] && b[i]){
            
        } 
    }
}


int* mergeSortA (int* arr, int beg, int end, int size){
    if(size == 1){
        return arr;
    }
    else{
        int middle = (size - 1)/2;
        int* right = mergeSortA(arr, beg, middle, middle-beg+1);
        int* left = mergeSortA(arr, middle+1, end, end-middle);
        return merge(right, left, middle-beg+1, end-middle);
    }
}

int main(void){

    int mainArray[] = {17,5,1,23,15,6,1,8};
    int length = sizeof(mainArray)/ sizeof(mainArray[0]);
    mergeSortA (mainArray, 0, length-1, length );

    for (int i = 0; i < length ; i++){
        cout << mainArray[i] ;
    }

    return 0;
}