#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
