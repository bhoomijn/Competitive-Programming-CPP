#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maxOfTwo(15, 9) << endl;
    return 0;
}
