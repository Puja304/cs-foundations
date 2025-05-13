#include <iostream>
using namespace std;



int partition(int* a, int low, int high){
    int pivot = a[(low+high)/2];
    int i = low - 1;
    int j = high + 1;
    while(true){
        do
        {
            i++;
        } while (a[i] < pivot);

        do
        {
            j--;
        } while (a[j] > pivot);


        if(i >= j){
            return j;   
        }

        swap(a[i],a[j]);
        
        
    }
}

void quicksrt(int* a, int low, int high){
    if(low < high){
        int p = partition(a, low, high);
        quicksrt(a,low,p);
        quicksrt(a,p+1,high);
    }
}

int main(void){
    int array1[] = {4,3,5,2,6,7,9,0};
    quicksrt(array1,0,7);
    for (int i = 0; i < 8; i++){
        cout << " " << array1[i] << " ";
    }
    cout << endl;
    return 0;
}