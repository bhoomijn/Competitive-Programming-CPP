#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks;
    marks["Math"] = 90;
    marks["Science"] = 85;

    for (const auto &entry : marks) {
        cout << entry.first << " -> " << entry.second << endl;
    }
    return 0;
}
