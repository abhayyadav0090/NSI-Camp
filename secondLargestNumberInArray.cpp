#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 10, 9};

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int x : arr) {
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        } else if (x > secondLargest && x < largest) {
            secondLargest = x;
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element";
    } else {
        cout << secondLargest;
    }

    return 0;
}
