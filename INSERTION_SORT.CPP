#include<iostream>
using namespace std;

    void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];      // current element
        int j = i - 1;

        // shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // place key
    }
}

int main(){
    int shiftSorting[5]={11,8,5,22,3};
    int n=sizeof(shiftSorting)/sizeof(shiftSorting[0]);

    insertionSort(shiftSorting,n);
    
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<shiftSorting[i]<<" ";
    }

}