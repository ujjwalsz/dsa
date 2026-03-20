#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int getLargest(vector<int> &arr) {
    int largest = INT_MIN;   // works for negative numbers too

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    vector<int> arr = {10, 5, 20, 8, 15};

    cout << "Largest element: " << getLargest(arr);

    return 0;
}