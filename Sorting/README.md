#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {3, 8, 12, 20, 25};
    int target = 20;

    int index = linearSearch(arr, 5, target);
    cout << "Target found at index: " << index << endl;
    return 0;
}
