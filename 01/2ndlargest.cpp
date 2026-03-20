#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int largest = -1, secondLargest = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {10, 5, 20, 8, 15};

    int result = getSecondLargest(arr);

    if (result == -1)
        cout << "No second largest element";
    else
        cout << "Second largest element: " << result;

    return 0;
}