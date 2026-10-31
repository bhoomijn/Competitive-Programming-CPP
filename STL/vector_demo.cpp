#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40};
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
