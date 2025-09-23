#include <iostream>
using namespace std;

void ReverseArray (int arr[], int size) {
    int start = 0, end = size-1;
    while (start < end) {
        swap(arr[start], arr[end]); //swap is built-in function
        start++;
        end--;
    }
}

int main() {
    int marks[] = {1, 2, 3, 4};
    int size = 4;
    ReverseArray(marks, size);

    for (int x = 0; x < size; x++) {
        cout << marks[x] << " ";
    }
    cout << endl;
    return 0;
}