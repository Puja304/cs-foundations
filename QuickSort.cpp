#include <iostream>
using namespace std;


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void q_sort(int* first, int* last, int length ){
    int pivot = *first;
    if (length == 1) return;
    else{
        int* i = first;
        int counter = 0;
        int* j = last;

        while (j >= i && counter < (length/2)){
            while(*i < pivot && i <= last){
                i++;
                counter++;
            }

            while(*j > pivot && j <= first){
                j--;
            }

            swap(i,j);
        }

        q_sort(first,first + counter, counter);
        q_sort(first+counter+1, last, length-counter);
    }
}



int main(void) {
    int collection[] = {4,3,2,1,5};
    int length = sizeof(collection)/sizeof(collection[1]);
    q_sort(collection, collection+(length-1), length);
    for(int i = 0; i < length; i++){
        cout << collection[i] << " ";
    }
    return 0;
}