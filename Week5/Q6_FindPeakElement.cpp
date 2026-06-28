#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] < nums[mid + 1]) {
            low = mid + 1;
        } 
        else {
            high = mid;
        }
    }

   
    return low;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    if (n > 0) {
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
    }

    int peakIndex = findPeakElement(nums);
    cout <<  peakIndex << endl;

    return 0;
}