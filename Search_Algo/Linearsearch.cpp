#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target) {
    for (int x = 0; x < size; x++) {
        if (arr[x] == target) {
            cout << "Found element at index: " << x << endl;
            return x;
        }
    }
    cout << "Not Found!!" << endl;
    return -1;
}

int main () {
    int marks[5] = {9, 4, 2, 6, 10};
    int size = 5;
    int target = 12;
    LinearSearch(marks, size, target);
    return 0;
}