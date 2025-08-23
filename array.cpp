#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout << "Printing sum of an array" << endl;
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum = sum +arr[i];
        cout <<sum << " ";
    }
    // int sum = 0;
    // for (int i = 0; i < size; i++) {
    //     sum += arr[i]; 
    // }
    
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // printArr(arr, 10);

    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
        cout<<sum<<" ";
    }

}