// Time complexity - O(n), n = array's size

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
// ---------------------------------------------------------

// Linear search advance version:

#include <iostream>
using namespace std;

// Function to perform enhanced linear search
void LinearSearchEnhanced(int arr[], int size, int target) {
    int first = -1, last = -1, count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
            if (first == -1) first = i;   // first occurrence
            last = i;                      // keep updating last occurrence
        }
    }

    if (count == 0) {
        cout << "Element not found!" << endl;
    } else {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
        cout << "Total count: " << count << endl;
    }
}

int main() {
    int marks[10] = {5, 3, 9, 2, 9, 6, 9, 1, 4, 9};
    int size = 10;
    int target = 9;

    LinearSearchEnhanced(marks, size, target);

    return 0;
}
