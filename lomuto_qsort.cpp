#include <iostream>
using namespace std;


int partition(int* array, int low, int high){
    int pivot = array[high];
    int p = low;
    for(int i = low; i < high; i++){
        if(array[i] < pivot){
            swap(array[i],array[p]);
            p++;
        }
    }
    swap(array[p], array[high]);
    return p;
}

void quicksrt(int* array, int low, int high){
    if(low < high){
        int p = partition(array, low, high);
        quicksrt(array, low, p-1);
        quicksrt(array, p+1, high);
    }
}

int main(void){
    int array1[] = {4,3,5,2,6,7,9,0};
    quicksrt(array1, 0, 7);
    for(int i = 0; i < 8; i++){
        cout << " " << array1[i] << " ";
    }


    return 0;

}