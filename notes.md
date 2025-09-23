Hii, today - Sep 07, 2025. I am starting my C++ journey. Exciting for some off-roading, and testosterone moments:

```
//program to use time sleep
#include <iostream>
#include <thread>   // for sleep_for
#include <chrono>   // for seconds
using namespace std;

void daddy() {
    cout << "Who's your daddy?" << endl;
}

int main() {
    daddy();

    // wait for 3 seconds
    this_thread::sleep_for(chrono::seconds(3));

    cout << "Pk Singh" << endl;

    return 0;
}
```

# Array: 
## Find the smallest and largest number in an array with index:
```
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int marks [5] = {99, 78, 86, 91, 42};
    int size = 5;

    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largestIndex = -1;
    int smallestIndex = -1;

    for (int x = 0; x < size; x++) {
        if (marks[x] > largest) {
            largest = marks[x];
            largestIndex = x;
        }
        if (marks[x] < smallest) {
            smallest = marks[x];
            smallestIndex = x;
        }
    }

    cout << "The largest element of array is: " << largest << " at index: " << largestIndex << endl;
    cout << "The smallest element of array is: " << smallest << " at index: " << smallestIndex << endl;
    return 0;
}
```
## Advance version:
```
#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define NINF -1e9

int main() {
    int marks[5] = {43, 68, 98, 91, 90};
    int size = 5;

    int largest = NINF, smallest = INF;
    int largestIndex = -1, smallestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (marks[i] > largest) {
            largest = marks[i];
            largestIndex = i;   // index store kar liya
        }
        if (marks[i] < smallest) {
            smallest = marks[i];
            smallestIndex = i;  // index store kar liya
        }
    }

    cout << "Largest: " << largest << " at index " << largestIndex << endl;
    cout << "Smallest: " << smallest << " at index " << smallestIndex << endl;

    return 0;
}
```