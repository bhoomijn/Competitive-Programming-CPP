#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Original array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Reversed array: ";
    for (int i = 4; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
