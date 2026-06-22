#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canJump(vector<int>& nums) {
    int max_reachable = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (i > max_reachable) {
            return false;
        }
        max_reachable = max(max_reachable, i + nums[i]);
        if (max_reachable >= n - 1) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    vector<int> nums(size);
    cout << "Enter the maximum jump lengths: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    
   
    if (canJump(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}