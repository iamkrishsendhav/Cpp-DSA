#include<iostream>
using namespace std;

int bSearch(int nums[], int size, int target) {
    int s = 0;
    int e = size - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;  // recompute mid each iteration

        if (nums[mid] == target) {
            return mid;
        }
        else if (target > nums[mid]) {
            s = mid + 1;   // move right
        }
        else {
            e = mid - 1;   // move left
        }
    }
    return -1;  // not found
}

int main() {
    int arr[6] = {-1, 0, 3, 5, 9, 12};
    int binarysearch = bSearch(arr, 6, 5);
    cout << binarysearch << endl;  // Expected output: 3
}
