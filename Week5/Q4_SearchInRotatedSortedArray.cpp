#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        }

        if (nums[low] <= nums[mid]) {
            
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        } 
        
        else {
            
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;  
            } else {
                high = mid - 1; 
            }
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    if (n > 0) {
        cout << "Enter the elements (rotated sorted array with distinct values): ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int result = search(nums, target);
    cout << "Output: " << result << endl;

    return 0;
}