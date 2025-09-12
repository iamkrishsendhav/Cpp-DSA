#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];   // XOR cancels duplicates
    }
    return ans;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 1, 2, 3};
    int unique = findUnique(arr, 7);
    cout << "Unique element: " << unique << endl;
    return 0;
}
