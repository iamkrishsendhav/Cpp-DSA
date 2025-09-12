#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    //int mid = (start+end)/2; //agr value int ki range se badi aa gai to yah kaam nhi karega
    int mid = start + (end-start)/2;
    while (start <= end )
    {
        if(arr[mid]==key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
    
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={ 3, 5,8,12,15};

    int evenIndex = BinarySearch(even,6,4);

    cout<<"index of 4 is: "<< evenIndex<<endl;

    int oddIndex = BinarySearch(odd,5,50);
    cout<<"index of 5 is: "<< oddIndex;

    return 0;
}