#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target) {
    for (int x = 0; x < size; x++) {
        if (arr[x] == target) {
            return x;
        }
    }
    return -1;
}

int main() {
    int marks[5] = {9, 4, 2, 6, 10};
    int size = 5;
    int target = 12;

    int index = LinearSearch(marks, size, target);
    if(index != -1)
        cout << "Found element at index: " << index << endl;
    else
        cout << "Not Found!!" << endl;

    return 0;
}

// Minor CP-style improvement
// Usually CP me cout function ke andar nahi rakhte; function sirf index return kare aur printing main me kare.
// Reason: function ka kaam single responsibility ho → debugging & reuse easy ho jaaye.