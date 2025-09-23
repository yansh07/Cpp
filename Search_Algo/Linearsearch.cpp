#include <iostream>
using namespace std;

int main () {
    int marks[5] = {5, 8, 9, 2, 1};
    int size = 5;
    int target = 9;

    for (int x = 0; x < size; x++) {
        if (marks[x] == target) {
            cout << x << endl;
        }
    }
    return 0;
}