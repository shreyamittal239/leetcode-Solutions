#include<iostream>
using namespace std;

int main() {
    int nums[7] = {23, 1, 54, 67, 3, 6, 90};

    bool isSorted = true;

    for (int i = 1; i < 7; i++) {
        if (nums[i] < nums[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is sorted";
    else
        cout << "Array is NOT sorted";

    return 0;
}
