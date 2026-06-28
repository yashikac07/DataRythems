#include <iostream>
#include <vector>

using namespace std;
int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; 
        } 
        else if (nums[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;
    int result = search(nums, target);
    if (result != -1) {
        cout << result<< endl;
    } else {
        cout<< result << endl;
    }

    return 0;
}

