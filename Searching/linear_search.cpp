#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16};
    int target = 12;

    int index = linearSearch(arr, 5, target);
    cout << "Index: " << index << endl;
    return 0;
}
