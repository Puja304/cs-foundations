#include <iostream>
using namespace std;

void merge(int* a, int low, int mid, int midp1, int high){
    int size = high-low+1;
    int iterator = 0;
    int temp[size];
    int a1 = low;
    int b1 = midp1;

    while(a1 <=  mid && b1 <= high){
        if(a[a1] < a[b1]){
            temp[iterator++] = a[a1++]; 
        } else{
            temp[iterator++] = a[b1++];
        }
    }

    if(a1 <= mid ){
        while(a1 <= mid){
            temp[iterator++] = a[a1++];
        }
    }

    if(b1 <= high){
        while(b1<= high){
            temp[iterator++] = a[b1++];
        }
    }

    for(int i = low; i <= high; i++){
        a[i] = temp[i-low];
    }
}


void merge_srt(int* a, int low, int high){
    if(low < high){
        int mid = (high+low)/2;
        merge_srt(a, low, mid);
        merge_srt(a,mid+1,high);
        merge(a,low,mid,mid+1,high);
    }
}

int main(void){
    int array1[] = {4,3,5,2,6,7,9,0};
    merge_srt(array1, 0, 7);
    for(int i = 0; i < 8; i++){
        cout << " " << array1[i] << " ";
    }

    cout << endl;

    return 0;

}